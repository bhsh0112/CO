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
`define E_ANS 3'b000
`define E_RDATA 3'b001
`define E_ADDER 3'b010
`define E_HL 3'b011
`define E_RDATA2 3'b100
`define E_CP0 3'b101
module E_GRF_Wdata_3_1(
    input [31:0] E_ans,
    input [31:0] E_adder,
	 input E_is_jal,
    input [2:0] s_E_GRF_Wdata,
	 input [31:0] E_HL_data,
	 input [31:0] E_Rdata2,
    output [31:0] E_GRF_Wdata
    );

	assign E_GRF_Wdata=(s_E_GRF_Wdata==`E_ANS)?E_ans:
											(s_E_GRF_Wdata==`E_ADDER)?E_adder+32'd4:
											(s_E_GRF_Wdata==`E_HL)?E_HL_data:
											(s_E_GRF_Wdata==`E_RDATA2)?E_Rdata2:
											E_ans;

endmodule


