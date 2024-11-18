`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:42:50 11/19/2022 
// Design Name: 
// Module Name:    D_E 
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
module D_E(
    input clk,
    input reset,
    input WE,
    input [31:0] PC_D,
    input [31:0] instr_D,
    input [31:0] imm32_D,
    input [31:0] FWD_RD1_D,
    input [31:0] FWD_RD2_D,
    output reg [31:0] PC_E,
    output reg [31:0] instr_E,
    output reg [31:0] imm32_E,
    output reg [31:0] RD1_E,
    output reg [31:0] RD2_E
    );
	 initial begin
	      PC_E = 0; 
         instr_E = 0; 
         imm32_E = 0; 
         RD1_E = 0;
         RD2_E = 0;
	 end
    always @(posedge clk)begin
	    if(reset) begin
		     PC_E <= 0; 
           instr_E <= 0; 
           imm32_E <= 0; 
           RD1_E <= 0;
           RD2_E <= 0;
		 end
		 else if(WE == 1) begin
		 	  PC_E <= PC_D; 
           instr_E <= instr_D; 
           imm32_E <= imm32_D; 
           RD1_E <= FWD_RD1_D;
           RD2_E <= FWD_RD2_D;
		 end
	 end

endmodule
