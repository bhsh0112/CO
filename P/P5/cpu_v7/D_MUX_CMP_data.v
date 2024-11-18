`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:40:01 12/01/2023 
// Design Name: 
// Module Name:    D_MUX_CMP_data 
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
`define ODATA 3'b000
`define EDATA 3'b001
`define MDATA 3'b010
`define WDATA 3'b011
`define WWDATA 3'b100
module D_MUX_CMP_data(
    input [2:0] s_D_rs_data,
    input [2:0] s_D_rt_data,
    input [31:0] D_Rdata1,
    input [31:0] D_Rdata2,
	 input [31:0] E_GRF_Wdata,
    input [31:0] M_FW_GRF_Wdata,
    input [31:0] W_FW_GRF_Wdata,
    output [31:0] D_cmp_data1,
    output [31:0] D_cmp_data2
    );
	assign D_cmp_data1=(s_D_rs_data==`EDATA)?E_GRF_Wdata:
																(s_D_rs_data==`MDATA)?M_FW_GRF_Wdata:
																(s_D_rs_data==`WWDATA)?W_FW_GRF_Wdata:
																D_Rdata1;
	assign D_cmp_data2=(s_D_rt_data==`EDATA)?E_GRF_Wdata:
																(s_D_rt_data==`MDATA)?M_FW_GRF_Wdata:
																(s_D_rt_data==`WWDATA)?W_FW_GRF_Wdata:
																D_Rdata2;

endmodule
