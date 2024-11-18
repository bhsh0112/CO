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
`define E_HL 2'b11
module E_GRF_Wdata_3_1(
    input [31:0] E_ans,
    input [31:0] E_adder,
	 input E_is_jal,
    input [1:0] s_E_GRF_Wdata,
	 input [31:0] E_HL_data,
    output [31:0] E_GRF_Wdata
    );

	assign E_GRF_Wdata=(s_E_GRF_Wdata==`E_ANS)?E_ans:
											(s_E_GRF_Wdata==`E_ADDER)?E_adder+32'd4:
											(s_E_GRF_Wdata==`E_HL)?E_HL_data:
											E_ans;

endmodule


