`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:52:09 11/14/2023 
// Design Name: 
// Module Name:    F_MUX_NPC_4_1 
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
`define ADDER 2'b00
`define IMM16 2'b01
`define IMM26 2'b10
`define RDATA1 2'b11
module F_MUX_NPC_4_1(
	 input [31:0] F_pc,
    input [1:0] s_D_jump,
    input D_equal,
    input [31:0] D_adder,
    input [31:0] D_imm16_EXT,
    input [31:0] D_imm26_EXT,
    input [31:0] D_Rdata1,
	 input stall,
	 input rst,
    output [31:0] F_npc
    );
	 
	assign F_npc=(s_D_jump==`IMM16&&D_equal)?D_imm16_EXT:
											(s_D_jump==`IMM26)?D_imm26_EXT:
											(s_D_jump==`RDATA1)?D_Rdata1:
											F_pc+32'd4;

endmodule
