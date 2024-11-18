`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:42:19 11/14/2023 
// Design Name: 
// Module Name:    D_E_register 
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
module D_E_register(
	 input clk,
	 input rst,
    input [31:0] D_Rdata1,
    input [31:0] D_Rdata2,
    input [31:0] D_instruction,
    input [31:0] D_adder,
	 input [31:0] D_pc,
	 input [4:0] D_rs,
	 input [4:0] D_rt,
	 input stall,
	 input D_rst,
    output reg [31:0] E_Rdata1,
    output reg [31:0] E_Rdata2,
    output reg [31:0] E_instruction,
    output reg [31:0] E_adder,
	 output reg [31:0] E_pc,
	 output reg [4:0] E_rs,
	 output reg [4:0] E_rt,
	 output reg E_rst
    );
	always @(posedge clk) begin
		if(rst) begin
			E_Rdata1<=32'h0;
			E_Rdata2<=32'h0;
			E_instruction<=32'h0;
			E_adder<=32'h0;
			E_pc<=32'h0;
			E_rs<=5'b0;
			E_rt<=5'b0;
			E_rst<=1'b0;
		end
		else if(stall) begin
			E_Rdata1<=32'h0;
			E_Rdata2<=32'h0;
			E_instruction<=32'h0;
			E_adder<=32'h0;
			E_pc<=32'h0;
			E_rs<=5'b0;
			E_rt<=5'b0;
			E_rst<=1'b0;
		end
		else begin
			E_Rdata1<=D_Rdata1;
			E_Rdata2<=D_Rdata2;
			E_instruction<=D_instruction;
			E_adder<=D_adder;
			E_pc<=D_pc;
			E_rs<=D_rs;
			E_rt<=D_rt;
			E_rst<=D_rst;
		end
	end

endmodule
