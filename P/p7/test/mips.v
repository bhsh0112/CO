`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:10:41 11/14/2023 
// Design Name: 
// Module Name:    mips 
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
module mips(
    input clk,
    input reset,
	 input interrupt,
	 output [31:0] macroscopic_pc,
	 
	 output [31:0] i_inst_addr,
	 input [31:0] i_inst_rdata,
	 
	 output [31:0] m_data_addr,
	 input [31:0] m_data_rdata,
	 output [31:0] m_data_wdata,
	 output [3:0] m_data_byteen,
	 
	 output [31:0] m_int_addr,
	 output [3:0] m_int_byteen,
	 
	 output [31:0] m_inst_addr,
	 
	 output w_grf_we,
	 output [4:0] w_grf_addr,
	 output [31:0] w_grf_wdata,
	 
	 output [31:0] w_inst_addr
    );
	 assign macroscopic_pc=b_pc;
	 wire [31:0] T1_Dout;wire [31:0] T1_Din;wire [31:2] T1_adress;wire T1_WE;wire [31:0] T2_Dout;wire [31:0] T2_Din;wire [31:2] T2_adress;wire T2_WE;
	 wire T1_IRQ;wire T2_IRQ;wire M_is_delay;wire [5:0] HWInt;wire [31:0] b_Rdata;wire [31:0] b_pc;wire [3:0] b_byteen;wire [31:0] b_adress;
	 wire [31:0] b_Wdata;
	 CPU CPU(
		.clk(clk),
		.reset(reset),
		.HWInt(HWInt),
		.i_inst_rdata(i_inst_rdata),
		.m_data_rdata(b_Rdata),
		.i_inst_addr(i_inst_addr),
		.m_data_addr(b_adress),
		.m_data_wdata(b_Wdata),
		.m_data_byteen(b_byteen),
		.m_inst_addr(b_pc),
		.w_grf_we(w_grf_we),
		.w_grf_addr(w_grf_addr),
		.w_grf_wdata(w_grf_wdata),
		.w_inst_addr(w_inst_addr)
	 );
	 Bridge Bridge(
		.b_adress(b_adress),
		.b_Wdata(b_Wdata),
		.b_byteen(b_byteen),
		.b_pc(b_pc),
		.b_Rdata(b_Rdata),
		.DM_Rdata(m_data_rdata),
		.DM_pc(m_inst_addr),
		.DM_adress(m_data_addr),
		.DM_Wdata(m_data_wdata),
		.DM_byteen(m_data_byteen),
		.T1_out(T1_Dout),
		.T1_in(T1_Din),
		.T1_adress(T1_adress),
		.T1_WE(T1_WE),
		.T2_out(T2_Dout),
		.T2_in(T2_Din),
		.T2_adress(T2_adress),
		.T2_WE(T2_WE),
		.m_int_addr(m_int_addr),
		.m_int_byteen(m_int_byteen),
		.interrupt(interrupt),
		.T1_IRQ(T1_IRQ),
		.T2_IRQ(T2_IRQ),
		.HWInt(HWInt)
	 );
	 TC T1(
		.clk(clk),
		.reset(reset),
		.Addr(T1_adress),
		.WE(T1_WE),
		.Din(T1_Din),
		.Dout(T1_Dout),
		.IRQ(T1_IRQ)
	 );
	 TC T2(
		.clk(clk),
		.reset(reset),
		.Addr(T2_adress),
		.WE(T2_WE),
		.Din(T2_Din),
		.Dout(T2_Dout),
		.IRQ(T2_IRQ)
	 );
	 


endmodule
