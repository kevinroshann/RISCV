module soc (
    input clk,
    input rstn
);
    
    reg [31:0] pc;
    reg [31:0] mem [0:31];
    wire [31:0] writeback_data;
    wire writeback_en;
    reg [2:0] state;
    
    localparam 
        FETCH   = 3'b000,
        DECODE  = 3'b001,
        EXECUTE = 3'b010;

    initial begin
        integer i;
        for (i = 0; i < 32; i = i + 1) begin
            mem[i] = 32'h0000_0000;
        end

        // Sample RISC-V Instructions
        mem[0] = 32'b0000000_00010_00001_000_00011_0110011; // add x3, x1, x2
        mem[1] = 32'b0100000_00010_00001_000_00100_0110011; // sub x4, x1, x2
        mem[2] = 32'b0000000_00100_00011_111_00101_0110011; // and x5, x3, x4
        mem[3] = 32'b0000000_00100_00011_110_00110_0110011; // or  x6, x3, x4
        mem[4] = 32'b0000000_00010_00001_010_00111_0110011; // slt x7, x1, x2
        mem[5] = 32'b0000000_00001_00000_000_00000_1110011; // system / ebreak
    end

    reg [31:0] instr;
    wire r_type = (instr[6:0] == 7'b0110011);
    wire system = (instr[6:0] == 7'b1110011);

    wire [6:0] funct7 = instr[31:25];
    wire [2:0] funct3 = instr[14:12];

    wire [4:0] rs1Id = instr[19:15];
    wire [4:0] rs2Id = instr[24:20];
    wire [4:0] rdId  = instr[11:7];

    reg [31:0] RegisterBank [0:31];
    reg [31:0] rs1; 
    reg [31:0] rs2; 
    reg [31:0] aluOut;

    initial begin
        integer k;
        for (k = 0; k < 32; k = k + 1) begin
            RegisterBank[k] = 32'h0000_0000;
        end
        RegisterBank[1] = 32'd15; // x1 = 15
        RegisterBank[2] = 32'd5;  // x2 = 5
    end

    // Sequential State & Register Logic
    always @(posedge clk) begin
        if (!rstn) begin
            pc    <= 32'd0;
            state <= FETCH;
        end else if (system) begin
            // Exit condition
        end else begin
            case (state)
                FETCH: begin
                    instr <= mem[pc[31:2]]; // Addressing word-aligned memory
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
                    pc    <= pc + 4;
                    state <= FETCH;
                end

                default: state <= FETCH;
            endcase
        end
    end

    // Combinational ALU
    always @(*) begin
        case (funct3)
            3'b000: aluOut = (funct7[5]) ? (rs1 - rs2) : (rs1 + rs2);
            3'b001: aluOut = rs1 << rs2[4:0];
            3'b010: aluOut = ($signed(rs1) < $signed(rs2)) ? 32'd1 : 32'd0;
            3'b011: aluOut = ($unsigned(rs1) < $unsigned(rs2)) ? 32'd1 : 32'd0;
            3'b100: aluOut = rs1 ^ rs2;
            3'b101: aluOut = (funct7[5]) ? ($signed(rs1) >>> rs2[4:0]) : (rs1 >> rs2[4:0]);
            3'b110: aluOut = rs1 | rs2;
            3'b111: aluOut = rs1 & rs2;
            default: aluOut = 32'd0;
        endcase
    end

    assign writeback_data = aluOut;
    assign writeback_en   = (state == EXECUTE);

endmodule