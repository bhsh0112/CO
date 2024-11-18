`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:29:58 11/17/2023 
// Design Name: 
// Module Name:    E_MUX_data12_3_1 
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
`define ODATA 2'b00
`define EDATA 2'b01
`define MDATA 2'b10
`define WDATA 2'b11
module E_MUX_data12_3_1(
    input [1:0] s_E_rs_data,
    input [1:0] s_E_rt_data,
    input [31:0] M_GRF_Wdata,
    input [31:0] W_GRF_Wdata,
    input [31:0] E_Rdata1,
    input [31:0] E_Rdata2,
    output [31:0] E_FW_Rdata1,
    output [31:0] E_FW_Rdata2
    );
	assign E_FW_Rdata1=(s_E_rs_data==`ODATA)?E_Rdata1:
																(s_E_rs_data==`MDATA)?M_GRF_Wdata:
																(s_E_rs_data==`WDATA)?W_GRF_Wdata:
																E_Rdata1;
	assign E_FW_Rdata2=(s_E_rt_data==`ODATA)?E_Rdata2:
																(s_E_rt_data==`MDATA)?M_GRF_Wdata:
																(s_E_rt_data==`WDATA)?W_GRF_Wdata:
																E_Rdata2;										

endmodule
