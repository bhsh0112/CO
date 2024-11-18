`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:43:25 11/17/2022 
// Design Name: 
// Module Name:    NPC 
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
module F_NPC(
    input [31:0] PC_F,
    input [31:0] PC_D,
	 input [31:0] RD1_D,
	 input [25:0] imm26_D,
	 input [15:0] imm16_D,
    input Branch_D,
    input JImm_D,
    input JReg_D,
    output [31:0] NPC_F
    );
    wire [31:0] PC4_D;
	 assign PC4_D = PC_D + 4;
	 assign NPC_F =  (Branch_D) ? PC_D + 4 + {{14{imm16_D[15]}}, imm16_D[15:0], 2'b0} :
	                 (JImm_D)   ? {PC4_D[31:28],imm26_D,2'b0} :
						  (JReg_D)   ? RD1_D :
			            PC_F + 4;
endmodule
