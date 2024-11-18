`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:09:39 11/17/2022 
// Design Name: 
// Module Name:    GRF 
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
module D_GRF(
    input clk,
    input reset,
    input RegWrite_W,
    input [4:0] rs_D,
    input [4:0] rt_D,
    input [4:0] A3_W,
    input [31:0] WD_W,
    input [31:0] PC_W,
    output [31:0] RD1_D,
    output [31:0] RD2_D
    );
	 reg [31:0] register[31:0];
	 integer i;
	 initial begin
	    for (i = 0; i < 32; i = i + 1) register[i] = 0;
	 end
	 //internal forward
	 assign RD1_D=(rs_D == A3_W && A3_W && RegWrite_W) ? WD_W : register[rs_D];
	 assign RD2_D=(rt_D == A3_W && A3_W && RegWrite_W) ? WD_W : register[rt_D];
	 always@(posedge clk)begin
	     if(reset==1)begin
		     for (i = 0; i < 32; i = i + 1) register[i] = 0;
		  end
		  else begin
		     if(RegWrite_W ==1 && A3_W > 0)begin
			     register[A3_W] = WD_W;
				  $display("@%h: $%d <= %h",  PC_W, A3_W, WD_W);
			  end
		  end
	 end
endmodule
