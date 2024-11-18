`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:16:25 11/19/2023 
// Design Name: 
// Module Name:    E_GRF_Wdata 
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
`define E_ANS 2'b00
`define E_RDATA 2'b01
`define E_ADDER 2'b10
module E_GRF_Wdata_3_1(
    input [31:0] E_ans,
    input [31:0] E_adder,
	 input E_is_jal,
    input [1:0] s_E_GRF_Wdata,
    output [31:0] E_GRF_Wdata
    );
	 wire [31:0] new_E_adder;
	 assign new_E_adder=(E_is_jal)?E_adder+32'd4:E_adder;
	assign E_GRF_Wdata=(s_E_GRF_Wdata==`E_ANS)?E_ans:
											(s_E_GRF_Wdata==`E_ADDER)?new_E_adder:
											E_ans;

endmodule


