`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:43:55 11/19/2022 
// Design Name: 
// Module Name:    E_M 
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
module E_M(
    input clk,
    input reset,
    input [31:0] PC_E,
    input [31:0] instr_E,
    input [31:0] res_E,
    input [31:0] FWD_RD2_E,
    output reg [31:0] PC_M,
    output reg [31:0] instr_M,
    output reg [31:0] res_M,
    output reg [31:0] RD2_M
    );
	 initial begin
	     PC_M=0;
		  instr_M=0;
		  res_M=0;
		  RD2_M=0;
	 end
	 always@(posedge clk)begin
	    if(reset) begin
		 	 PC_M<=0;
		    instr_M<=0;
		    res_M<=0;
		    RD2_M<=0;
		 end
		 else begin
		    PC_M<=PC_E;
			 instr_M<=instr_E;
			 res_M<=res_E;
			 RD2_M<=FWD_RD2_E;
		 end
	 end


endmodule
