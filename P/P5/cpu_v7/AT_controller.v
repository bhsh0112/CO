`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:33:06 11/17/2023 
// Design Name: 
// Module Name:    AT_controller 
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
module AT_controller(
	input [1:0] T_use_rs,
	input [1:0] T_use_rt,
	input [1:0] D_T_new,
	input [1:0] E_T_new,
	input [1:0] M_T_new,
	input [4:0] E_Wreg,
	input [4:0] M_Wreg,
	input [4:0] W_Wreg,
	input [4:0] D_rs,
	input [4:0] D_rt,
	input [4:0] E_rs,
	input [4:0] E_rt,
	input [4:0] M_rs,
	input [4:0] M_rt,
	input [4:0] W_rs,
	input [4:0] W_rt,
	input E_is_LW,
	input E_is_SW,
	input M_is_LW,
	input M_is_SW,
	input W_is_LW,
	input E_GRF_WE,
	input M_GRF_WE,
	input W_GRF_WE,
	output stall,
	output [2:0] s_D_rs_data,
	output [2:0] s_D_rt_data,
	output [2:0] s_E_rs_data,
	output [2:0] s_E_rt_data,
	output [2:0] s_M_rt_data
    );
	 //stall
	wire E_stall_rs;
	wire E_stall_rt;
	wire M_stall_rs;
	wire M_stall_rt;
	assign E_stall_rs=(E_Wreg==D_rs&&D_rs!=5'b0&&E_T_new>T_use_rs&&E_GRF_WE)?1'b1:1'b0;
	assign E_stall_rt=(E_Wreg==D_rt&&D_rt!=5'b0&&E_T_new>T_use_rt&&E_GRF_WE)?1'b1:1'b0;
	assign M_stall_rs=(M_Wreg==D_rs&&D_rs!=5'b0&&M_T_new>T_use_rs&&M_GRF_WE)?1'b1:1'b0;
	assign M_stall_rt=(M_Wreg==D_rt&&D_rt!=5'b0&&M_T_new>T_use_rt&&M_GRF_WE)?1'b1:1'b0;
	
	assign stall=E_stall_rs||E_stall_rt||M_stall_rs||M_stall_rt;
	
	//trans
	assign s_D_rs_data=(D_rs==E_Wreg&&D_rs!=5'b0&&!E_is_LW&&E_GRF_WE)?`EDATA:
															(D_rs==M_Wreg&&D_rs!=5'b0&&M_GRF_WE)?`MDATA:
															(D_rs==W_Wreg&&D_rs!=5'b0&&W_GRF_WE)?`WDATA:
															`ODATA;
	assign s_D_rt_data=(D_rt==E_Wreg&&D_rt!=5'b0&&!E_is_LW&&E_GRF_WE)?`EDATA:
															(D_rt==M_Wreg&&D_rt!=5'b0&&M_GRF_WE)?`MDATA:
															(D_rt==W_Wreg&&D_rt!=5'b0&&W_GRF_WE)?`WDATA:
															`ODATA;
	assign s_E_rs_data=(E_rs==M_Wreg&&E_rs!=5'b0&&M_GRF_WE)?`MDATA:
															(E_rs==W_Wreg&&E_rs!=5'b0&&W_GRF_WE)?`WDATA:
															`ODATA;
	assign s_E_rt_data=(E_rt==M_Wreg&&E_rt!=5'b0&&M_GRF_WE)?`MDATA:
															(E_rt==W_Wreg&&E_rt!=5'b0&&W_GRF_WE)?`WDATA:
															`ODATA;
	assign s_M_rt_data=(M_rt==W_Wreg&&M_rt!=5'b0&&W_is_LW&&W_GRF_WE)?`WDATA:
															`ODATA;

endmodule
