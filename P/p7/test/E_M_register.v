`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:05:05 11/14/2023 
// Design Name: 
// Module Name:    E_M_register 
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
module E_M_register(
	 input clk,
	 input rst,
    input [31:0] E_ans,
    input [31:0] E_instruction,
    input [31:0] E_Rdata2,
    input [31:0] E_adder,
	 input [31:0] E_pc,
	 input [4:0] E_rs,
	 input [4:0] E_rt,
	 input E_rst,
	 input E_equal,
	 input [31:0] E_HL_data,
	 input [31:0] E_GRF_Wdata,
	 input E_overflow,
	 input E_overflow_m,
	 input E_is_delay,
	 input M_REQ,
    output reg [31:0] M_ans,
    output reg [31:0] M_instruction,
    output reg [31:0] M_Rdata2,
    output reg [31:0] M_adder,
	 output reg [31:0] M_pc,
	 output reg [4:0] M_rs,
	 output reg [4:0] M_rt,
	 output reg M_rst,
	 output reg [31:0] M_HL_data,
	 output reg M_equal,
	 output reg [31:0] M_FW_GRF_Wdata,
	 output reg M_overflow,
	 output reg M_overflow_m,
	 output reg M_is_delay
    );
	always @(posedge clk) begin
		if(rst||M_REQ)begin
			M_ans<=32'b0;
			M_instruction<=32'b0;
			M_Rdata2<=32'b0;
			M_adder<=32'b0;
			M_pc<=32'b0;
			M_rs<=5'b0;
			M_rt<=0;
			M_rst<=0;
			M_HL_data<=0;
			M_equal<=0;
			M_FW_GRF_Wdata<=0;
			M_overflow<=0;
			M_overflow_m<=0;
			M_is_delay<=0;
		end
		else  begin
			M_ans<=E_ans;
			M_instruction<=E_instruction;
			M_Rdata2<=E_Rdata2;
			M_adder<=E_adder;
			M_pc<=E_pc;
			M_rs<=E_rs;
			M_rt<=E_rt;
			M_rst<=E_rst;
			M_HL_data<=E_HL_data;
			M_equal<=E_equal;
			M_FW_GRF_Wdata<=E_GRF_Wdata;
			M_overflow<=E_overflow;
			M_overflow_m<=E_overflow_m;
			M_is_delay<=E_is_delay;
		end
	end

endmodule
