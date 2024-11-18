`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:47:20 11/19/2022 
// Design Name: 
// Module Name:    F_D 
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
module F_D(
    input clk,
    input reset,
    input WE,
    input [31:0] PC_F,
    input [31:0] instr_F,
    output reg [31:0] PC_D,
    output reg [31:0] instr_D
    );
	 initial begin
	    PC_D = 0;
	    instr_D = 0;
	 end
	 always @(posedge clk) begin
	    if(reset) begin
		      instr_D <= 0;
            PC_D <= 0;
		 end
		 else if(WE == 1) begin
		      instr_D <= instr_F;
			   PC_D <= PC_F;
		 end
	 end
endmodule
