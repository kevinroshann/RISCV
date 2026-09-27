module Memory (
   input             clk,
   input      [31:0] mem_addr,  // address to be read
   output reg [31:0] mem_rdata, // data read from memory
   input   	     mem_rstrb  ,// goes high when processor wants to read
   input      [31:0] mem_wdata,
   input      [3:0]  mem_wmask
   );
   reg [31:0] MEM [0:255];

`include "riscv_assembly.v"
  integer L0_   = 12;
   integer L1_   = 40;
   integer wait_ = 64;   
   integer L2_   = 72;
   integer slow_bit=5;
   initial begin

      LI(a0,0);
   // Copy 16 bytes from adress 400
   // to address 800
      LI(s1,16);      
      LI(s0,0);         
   Label(L0_); 
      LB(a1,s0,400);
      SB(a1,s0,800);       
      CALL(LabelRef(wait_));
      ADDI(s0,s0,1); 
      BNE(s0,s1, LabelRef(L0_));

   // Read 16 bytes from adress 800
      LI(s0,0);
   Label(L1_);
      LB(a0,s0,800); // a0 (=x10) is plugged to the LEDs
      CALL(LabelRef(wait_));
      ADDI(s0,s0,1); 
      BNE(s0,s1, LabelRef(L1_));
      EBREAK();
      
   Label(wait_);
      LI(t0,1);
      SLLI(t0,t0,slow_bit);
   Label(L2_);
      ADDI(t0,t0,-1);
      BNEZ(t0,LabelRef(L2_));
      RET();

      endASM();

      // Note: index 100 (word address)
      //     corresponds to 
      // address 400 (byte address)
      MEM[100] = {8'h4, 8'h3, 8'h2, 8'h1};
      MEM[101] = {8'h8, 8'h7, 8'h6, 8'h5};
      MEM[102] = {8'hc, 8'hb, 8'ha, 8'h9};
      MEM[103] = {8'hff, 8'hf, 8'he, 8'hd};            
   end



 wire [29:0] word_addr = mem_addr[31:2];
   always @(posedge clk) begin
      if(mem_rstrb) begin
         mem_rdata <= MEM[word_addr];
      end
      if(mem_wmask[0]) MEM[word_addr][ 7:0 ] <= mem_wdata[ 7:0 ];
      if(mem_wmask[1]) MEM[word_addr][15:8 ] <= mem_wdata[15:8 ];
      if(mem_wmask[2]) MEM[word_addr][23:16] <= mem_wdata[23:16];
      if(mem_wmask[3]) MEM[word_addr][31:24] <= mem_wdata[31:24];

    end
endmodule



module Processor (
    input clk,
    input rstn,
 output [31:0]     mem_addr,
    input [31:0]      mem_rdata,
    output 	      mem_rstrb,
    output [31:0]     mem_wdata,
    output [3:0]      mem_wmask,
    output reg [31:0] x10 = 0
);
    
    reg [31:0] PC=0;
    wire [31:0] PCplus4 = PC+4;
wire [31:0] PCplusImm = PC + (jal_type   ? Jimm :
                              branch_type ? Bimm :
                              Uimm);


    wire [31:0] nextPC=((takeBranch&&branch_type)||jal_type)?PCplusImm:((jalr_type)?{aluPlus[31:1],1'b0}:PCplus4);

    reg [2:0] state;
    reg takeBranch;
    
    localparam 
        FETCH   = 3'd0,
        WAIT=3'd1,
        DECODE  = 3'd2,
        EXECUTE = 3'd3,
        LOAD=3'd4,
        WAIT_DATA=3'd5,
        STORE=3'd6;
        // LOAD=3'b011;


    reg [31:0] instr;
    wire r_type = (instr[6:0] == 7'b0110011);
    wire i_type = (instr[6:0] == 7'b0010011);
    wire branch_type=(instr[6:0]==7'b1100011);
   wire load_type=(instr[6:0]==7'b0000011);
   wire isLoad    =  (instr[6:0] == 7'b0000011);
wire jal_type=(instr[6:0]==7'b1101111);
wire jalr_type=(instr[6:0]==7'b1100111);
   wire isAUIPC   =  (instr[6:0] == 7'b0010111); // rd <- PC + Uimm
   wire isLUI     =  (instr[6:0] == 7'b0110111); // rd <- Uimm  
   wire isStore   =  (instr[6:0] == 7'b0100011); // mem[rs1+Simm] <- rs2


    wire system = (instr[6:0] == 7'b1110011);

    // Sign-extended 12-bit immediate (used by I-type instructions)
wire [31:0] Uimm = {instr[31:12], 12'b0};
   wire [31:0] Iimm={{21{instr[31]}}, instr[30:20]};
   wire [31:0] Simm={{21{instr[31]}}, instr[30:25],instr[11:7]};
   wire [31:0] Bimm={{20{instr[31]}}, instr[7],instr[30:25],instr[11:8],1'b0};
   wire [31:0] Jimm={{12{instr[31]}}, instr[19:12],instr[20],instr[30:21],1'b0};

    wire [6:0] funct7 = instr[31:25];
    wire [2:0] funct3 = instr[14:12];

    wire [4:0] rs1Id = instr[19:15];
    wire [4:0] rs2Id = instr[24:20];
    wire [4:0] rdId  = instr[11:7];

    reg [31:0] RegisterBank [0:31];
    reg [31:0] rs1; 
    reg [31:0] rs2; 
    reg [31:0] aluOut;

    // ALU operand selection
    wire [31:0] aluIn1 = rs1;
    wire [31:0] aluIn2 = (r_type||branch_type) ? rs2 : Iimm;
   wire [31:0] aluPlus=aluIn1+aluIn2;
    initial begin
        integer k;
        for (k = 0; k < 32; k = k + 1) begin
            RegisterBank[k] = 32'h0000_0000;
        end
        // RegisterBank[1] = 32'd15; // x1 = 15
        // RegisterBank[2] = 32'd5;  // x2 = 5
    end

    // Sequential State & Register Logic
    always @(posedge clk) begin
        if (!rstn) begin
            PC    <= 32'd0;
            state <= FETCH;
        end else begin
 if(writeBackEn && rdId != 0) begin
	    RegisterBank[rdId] <= writeBackData;
	    // $display("r%0d <= %b",rdId,writeBackData);
	    // For displaying what happens.
	    if(rdId == 10) begin
	       x10 <= writeBackData;
	    end
	 end



            case (state)
                FETCH: begin
                    // instr <= MEM[PC[31:2]]; // Word-aligned memory access
                    state <= WAIT;
                end
                
WAIT: begin
  instr<=mem_rdata;
  state<=DECODE;
end

                DECODE: begin
                    rs1   <= RegisterBank[rs1Id];
                    rs2   <= RegisterBank[rs2Id];
                    state <= EXECUTE;
                end

                EXECUTE: begin
if(!system) begin
        PC<= nextPC;
end
              
                    state <= isLoad ? LOAD : isStore?STORE:FETCH;
                end
                	   LOAD: begin
	      state <= WAIT_DATA;
	   end
	   WAIT_DATA: begin
	      state <= FETCH;
	   end
STORE: begin
  state<=FETCH;
end
                default: state <= FETCH;
            endcase
        end
    end

    // Combinational ALU supporting R-type (0110011) and I-type (0010011)
    always @(*) begin
        case (funct3)
            3'b000: begin
                // ADD / ADDI vs SUB (SUB is only valid for R-type with funct7[5] = 1)
                if (r_type && funct7[5])
                    aluOut = aluIn1 - aluIn2;
                else
                    aluOut = aluIn1 + aluIn2; // Handles ADD and ADDI
            end
            3'b001: aluOut = aluIn1 << aluIn2[4:0];                          // SLL / SLLI
            3'b010: aluOut = ($signed(aluIn1) < $signed(aluIn2)) ? 32'd1 : 32'd0; // SLT / SLTI
            3'b011: aluOut = ($unsigned(aluIn1) < $unsigned(aluIn2)) ? 32'd1 : 32'd0; // SLTU / SLTIU
            3'b100: aluOut = aluIn1 ^ aluIn2;                                // XOR / XORI
            3'b101: begin
                // SRL / SRLI vs SRA / SRAI (differentiated by funct7[5])
                if (funct7[5])
                    aluOut = $signed(aluIn1) >>> aluIn2[4:0];               // SRA / SRAI
                else
                    aluOut = aluIn1 >> aluIn2[4:0];                        // SRL / SRLI
            end
            3'b110: aluOut = aluIn1 | aluIn2;                                // OR / ORI
            3'b111: aluOut = aluIn1 & aluIn2;                                // AND / ANDI
            default: aluOut = 32'd0;
        endcase
    end

always @(*) begin
    case (funct3)
        3'b000:  takeBranch = (aluIn1 == aluIn2);                   // BEQ
        3'b001:  takeBranch = (aluIn1 != aluIn2);                   // BNE
        3'b100:  takeBranch = ($signed(aluIn1) < $signed(aluIn2));   // BLT
        3'b101:  takeBranch = ($signed(aluIn1) >= $signed(aluIn2));  // BGE
        3'b110:  takeBranch = ($unsigned(aluIn1) < $unsigned(aluIn2));  // BLTU
        3'b111:  takeBranch = ($unsigned(aluIn1) >= $unsigned(aluIn2)); // BGEU
        default: takeBranch = 1'b0;                                 // Prevents latch synthesis
    endcase
end

wire is_jump = jal_type || jalr_type;
    wire writeback_en   = (state == EXECUTE) && (r_type || i_type || is_jump|| isLUI||isAUIPC);


       assign writeBackEn = (state==EXECUTE && !branch_type && !isStore && !isLoad) ||
			(state==WAIT_DATA) ;
    wire [31:0] writeback_data = is_jump ? PCplus4 :
                                            (isLUI)?Uimm: 
                                            (isAUIPC) ?(PC+Uimm): aluOut;
   assign mem_addr = (state == WAIT|| state == FETCH) ?
		     PC : loadstore_addr ;
   assign mem_rstrb = (state == FETCH || state == LOAD);
  assign mem_wmask = {4{(state == STORE)}} & STORE_wmask;


   wire [31:0] loadstore_addr = rs1 + (isStore ? Simm : Iimm);
      wire [15:0] LOAD_halfword =
	       loadstore_addr[1] ? mem_rdata[31:16] : mem_rdata[15:0];

   wire  [7:0] LOAD_byte =
	       loadstore_addr[0] ? LOAD_halfword[15:8] : LOAD_halfword[7:0];

wire mem_byteAccess     = funct3[1:0] == 2'b00;
   wire mem_halfwordAccess = funct3[1:0] == 2'b01;



   wire LOAD_sign =
	!funct3[2] & (mem_byteAccess ? LOAD_byte[7] : LOAD_halfword[15]);

   wire [31:0] LOAD_data =
         mem_byteAccess ? {{24{LOAD_sign}},     LOAD_byte} :
     mem_halfwordAccess ? {{16{LOAD_sign}}, LOAD_halfword} :
                          mem_rdata ;



                             assign mem_wdata[ 7: 0] = rs2[7:0];
   assign mem_wdata[15: 8] = loadstore_addr[0] ? rs2[7:0]  : rs2[15: 8];
   assign mem_wdata[23:16] = loadstore_addr[1] ? rs2[7:0]  : rs2[23:16];
   assign mem_wdata[31:24] = loadstore_addr[0] ? rs2[7:0]  :
			     loadstore_addr[1] ? rs2[15:8] : rs2[31:24];
   wire [3:0] STORE_wmask =
	      mem_byteAccess      ?
	            (loadstore_addr[1] ?
		          (loadstore_addr[0] ? 4'b1000 : 4'b0100) :
		          (loadstore_addr[0] ? 4'b0010 : 4'b0001)
                    ) :
	      mem_halfwordAccess ?
	            (loadstore_addr[1] ? 4'b1100 : 4'b0011) :
              4'b1111;
endmodule




















module SOC (
    input  clk,        // system clock
    input  rstn,      // reset button
    output [4:0] LEDS, // system LEDs
    input  RXD,        // UART receive
    output TXD         // UART transmit
);
//    wire    clk;
//    wire    rstn;
   Memory RAM(
      .clk(clk),
      .mem_addr(mem_addr),
      .mem_rdata(mem_rdata),
      .mem_rstrb(mem_rstrb)
   );

   wire [31:0] mem_addr;
   wire [31:0] mem_rdata;
   wire mem_rstrb;
   wire [31:0] x1;
   Processor CPU(
      .clk(clk),
      .rstn(rstn),
      .mem_addr(mem_addr),
      .mem_rdata(mem_rdata),
      .mem_rstrb(mem_rstrb),
      .x1(x1)
   );
   assign LEDS = x1[4:0];

   assign TXD  = 1'b0; // not used for now
endmodule