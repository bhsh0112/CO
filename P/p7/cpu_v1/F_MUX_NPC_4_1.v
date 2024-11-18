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
`define ADDER 3'b000
`define IMM16 3'b001
`define IMM26 3'b010
`define RDATA1 3'b011
`define ERET 3'b100
module F_MUX_NPC_4_1(
	 input [31:0] F_pc,
    input [2:0] s_D_jump,
    input D_equal,
    input [31:0] D_adder,
    input [31:0] D_imm16_EXT,
    input [31:0] D_imm26_EXT,
    input [31:0] D_Rdata1,
	 input [31:0] M_CP0_EPCOut,
	 input M_REQ,
	 input stall,
	 input rst,
    output [31:0] F_npc
    );
	 
	assign F_npc=(s_D_jump==`ERET)?M_CP0_EPCOut:
											(s_D_jump==`IMM16&&D_equal)?D_imm16_EXT:
											(s_D_jump==`IMM26)?D_imm26_EXT:
											(s_D_jump==`RDATA1)?D_Rdata1:
											F_pc+32'd4;

endmodule
