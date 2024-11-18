`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:01:22 11/14/2023 
// Design Name: 
// Module Name:    D_jump 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module D_EXT(
    input [15:0] D_imm16,
    input [25:0] D_imm26,
	 input [31:0] D_adder,
	 input [31:0] D_pc,
    output [31:0] D_imm16_EXT,
    output [31:0] D_imm26_EXT
    );
	assign D_imm16_EXT=D_adder+{{14{D_imm16[15]}},D_imm16,2'b0};
	assign D_imm26_EXT={D_pc[31:28],D_imm26,2'b0};

endmodule
