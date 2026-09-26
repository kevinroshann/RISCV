module soc (
    input clk,
    input rstn
);
    
    reg [31:0] PC;
    wire [31:0] PCplus4 = PC+4;
wire [31:0] PCplusImm = PC + (jal_type   ? Jimm :
                              branch_type ? Bimm :
                              Uimm);


    wire [31:0] nextPC=((takeBranch&&branch_type)||jal_type)?PCplusImm:((jalr_type)?{aluPlus[31:1],1'b0}:PCplus4);
    reg [31:0] MEM [255];

    reg [2:0] state;
    reg takeBranch;
    
    localparam 
        FETCH   = 3'b000,
        DECODE  = 3'b001,
        EXECUTE = 3'b010,
        LOAD=3'b011;

`include "riscv_assembly.v"
   
initial begin
      PC = 0;

      // 1. Setup values
      ADDI(x1, x0, 10);
      ADDI(x2, x0, 10);
      ADDI(x3, x0, 20);

      // 2. Test BEQ (Branch Taken: jumps to address 24)
      BEQ(x1, x2, 12);
      ADDI(x4, x0, 99);     // Skipped (Address 16)
      ADDI(x5, x0, 99);     // Skipped (Address 20)

      // 3. Test JAL (Jumps to address 36)
      JAL(x6, 12);          // Saves link address 28 to x6
      ADDI(x7, x0, 99);     // Skipped (Address 28)
      ADDI(x8, x0, 99);     // Skipped (Address 32)

      // JAL Target
      ADDI(x9, x0, 42);     // Executed (Address 36)

      // 4. Test JALR
      ADDI(x10, x0, 52);    // Target byte address set to 52 (0x34)
      JALR(x11, x10, 0);    // Executed at Address 44; saves link 48 to x11
      ADDI(x12, x0, 99);    // Skipped (Address 48)

      // JALR Target
      ADDI(x13, x0, 100);   // Executed (Address 52)
      EBREAK();
   end


    reg [31:0] instr;
    wire r_type = (instr[6:0] == 7'b0110011);
    wire i_type = (instr[6:0] == 7'b0010011);
    wire branch_type=(instr[6:0]==7'b1100011);
   wire load_type=(instr[6:0]==7'b0000011);

wire jal_type=(instr[6:0]==7'b1101111);
wire jalr_type=(instr[6:0]==7'b1100111);

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
        end else if (system) begin
            // Exit condition
        end else begin
            case (state)
                FETCH: begin
                    instr <= MEM[PC[31:2]]; // Word-aligned memory access
                    state <= DECODE;
                end
                
                DECODE: begin
                    rs1   <= RegisterBank[rs1Id];
                    rs2   <= RegisterBank[rs2Id];
                    state <= EXECUTE;
                end

                EXECUTE: begin
                    if (writeback_en && (rdId != 5'd0)) begin
                        RegisterBank[rdId] <= writeback_data;
                    end
                    PC<= nextPC;
                    state <= FETCH;
                end

                LOAD: begin

                  
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
    wire writeback_en   = (state == EXECUTE) && (r_type || i_type || is_jump);
    wire [31:0] writeback_data = is_jump ? PCplus4 : aluOut;
  
endmodule