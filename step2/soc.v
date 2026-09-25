module soc (
    input clk,
    input rstn
);
    
    reg [31:0] PC;
    reg [31:0] MEM [255];
    wire [31:0] writeback_data;
    wire writeback_en;
    reg [2:0] state;
    
    localparam 
        FETCH   = 3'b000,
        DECODE  = 3'b001,
        EXECUTE = 3'b010;

`include "riscv_assembly.v"
   
   initial begin
      PC = 0;
      ADD(x0,x0,x0);
      ADD(x1,x0,x0);//x1 has 0
      ADDI(x1,x1,1);//x1 has 1
      ADDI(x1,x1,1);//x1 has 2
      ADDI(x1,x1,1);//x1 has 3
      ADDI(x1,x1,1);//x1 has 4
      ADD(x2,x1,x0);//x2 has 4
      ADD(x3,x1,x2);//x3 has 8
    //   SRLI(x3,x3,3);
    //   SLLI(x3,x3,31);
    //   SRAI(x3,x3,5);
    //   SRLI(x1,x3,26);
      EBREAK();
   end


    reg [31:0] instr;
    wire r_type = (instr[6:0] == 7'b0110011);
    wire i_type = (instr[6:0] == 7'b0010011);
    wire system = (instr[6:0] == 7'b1110011);

    // Sign-extended 12-bit immediate (used by I-type instructions)
    wire [31:0] Iimm = {{20{instr[31]}}, instr[31:20]};
    
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
    wire [31:0] aluIn2 = r_type ? rs2 : Iimm;

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
                    PC    <= PC + 4;
                    state <= FETCH;
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

    assign writeback_data = aluOut;
    assign writeback_en   = (state == EXECUTE) && (r_type || i_type);

endmodule