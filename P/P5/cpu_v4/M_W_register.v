`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:21:57 11/14/2023 
// Design Name: 
// Module Name:    M_W_register 
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
module M_W_register(
	input clk,
	input rst,
    input [31:0] M_ans,
    input [31:0] M_instruction,
    input [31:0] M_Rdata,
    input [31:0] M_adder,
	 input [31:0] M_pc,
	 input [4:0] M_rs,
	 input [4:0] M_rt,
	 input M_rst,
	 input M_equal,
	 input [31:0] M_GRF_Wdata,
    output reg [31:0] W_ans,
    output reg [31:0] W_instruction,
    output reg [31:0] W_Rdata,
    output reg [31:0] W_adder,
	 output reg [31:0] W_pc,
	 output reg [4:0] W_rs,
	 output reg [4:0] W_rt,
	 output reg W_rst,
	 output reg W_equal,
	 output reg [31:0] W_FW_GRF_Wdata
    );
	always @(posedge clk) begin
		if(rst) begin
			W_ans<=0;
			W_instruction<=0;
			W_Rdata<=0;
			W_adder<=0;
			W_pc<=0;
			W_rs<=0;
			W_rt<=0;
			W_rst<=0;
			W_equal<=0;
			W_FW_GRF_Wdata<=0;
		end
		else begin
			W_ans<=M_ans;
			W_instruction<=M_instruction;
			W_Rdata<=M_Rdata;
			W_adder<=M_adder;
			W_pc<=M_pc;
			W_rs<=M_rs;
			W_rt<=M_rt;
			W_rst<=M_rst;
			W_equal<=M_equal;
			W_FW_GRF_Wdata<=M_GRF_Wdata;
		end
	end

endmodule
