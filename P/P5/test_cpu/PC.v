`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:46:08 11/17/2022 
// Design Name: 
// Module Name:    PC 
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
`define START_PC 32'h0000_3000
module F_PC(
    input clk,
	 input reset,
	 input WE,
    input [31:0] NPC_F,
    output reg [31:0] PC_F
    );
    initial begin
	    PC_F = `START_PC;
	 end
	 always @(posedge clk)begin
	    if(reset==1) PC_F <=`START_PC;
		 else if(WE==1) PC_F<=NPC_F;
	 end

endmodule
