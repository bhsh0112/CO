`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:13:05 11/17/2023 
// Design Name: 
// Module Name:    D_MUX_st_3_1 
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
module D_MUX_st_3_1(
    input [31:0] D_Rdata1,
    input [31:0] D_Rdata2,
    input [1:0] s_D_rs_data,
    input [1:0] s_D_rt_data,
    input [31:0] E_GRF_Wdata,
    input [31:0] M_GRF_Wdata,
	 input [31:0] W_GRF_Wdata,
    output [31:0] D_FW_Rdata1,
    output [31:0] D_FW_Rdata2
    );
	assign D_FW_Rdata1=(s_D_rs_data==`MDATA)?M_GRF_Wdata:
														(s_D_rs_data==`WDATA)?W_GRF_Wdata:
														D_Rdata1;
	assign D_FW_Rdata2=(s_D_rt_data==`MDATA)?M_GRF_Wdata:
														(s_D_rt_data==`WDATA)?W_GRF_Wdata:
														D_Rdata2;									

endmodule
