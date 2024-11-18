`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:27:03 11/20/2022 
// Design Name: 
// Module Name:    M_W 
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
module M_W(
    input clk,
    input reset,
    input [31:0] PC_M,
    input [31:0] instr_M,
    input [31:0] res_M,
    input [31:0] DM_OUT_M,
	 output reg [31:0] PC_W,
    output reg [31:0] instr_W,
    output reg [31:0] res_W,
    output reg [31:0] DM_OUT_W
    );
	 initial begin
	    PC_W = 0;
		 instr_W = 0;
		 res_W = 0;
		 DM_OUT_W = 0;
	 end
	 always@(posedge clk)begin
	    if(reset) begin
		    PC_W <= 0;
			 instr_W <= 0;
			 res_W <= 0;
			 DM_OUT_W <=0;
		 end 
		 else begin
		    PC_W <= PC_M;
			 instr_W <= instr_M;
			 res_W <= res_M;
			 DM_OUT_W <= DM_OUT_M;
		 end
	 end


endmodule
