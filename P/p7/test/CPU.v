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
module CPU(
    input clk,
    input reset,
	 input [5:0] HWInt,
	 input [31:0] i_inst_rdata,
	 input [31:0] m_data_rdata,
	 output [31:0] i_inst_addr,
	 output [31:0] m_data_addr,
	 output [31:0] m_data_wdata,
	 output [3:0] m_data_byteen,
	 output [31:0] m_inst_addr,
	 output w_grf_we,
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,
    output [31:0] w_inst_addr
    );
	 assign w_grf_we=W_GRF_WE;
	 assign w_grf_addr=W_Wreg;
	 assign w_grf_wdata=W_Wdata;
	 assign w_inst_addr=W_pc;
	 assign i_inst_addr=F_pc;
	 assign m_data_addr=M_ans;
	 assign m_data_wdata=M_Wdata;
	 assign m_data_byteen=M_data_byteen;
	 assign m_inst_addr=M_pc;
	 
	 
//F
wire [31:0] F_npc;wire [31:0] F_pc;wire [31:0] F_instruction;wire F_is_delay;
//D
wire [2:0] s_D_jump;wire D_equal;wire [31:0] D_adder;wire [31:0] D_pc;wire [31:0] D_imm16_EXT;wire [31:0] D_imm26_EXT;wire [31:0] D_Rdata1;
wire [31:0] D_instruction;wire [4:0] D_rs;wire [4:0] D_rt;wire [15:0] D_imm16;wire [25:0] D_imm26;wire [31:0] D_Rdata2;wire [31:0] D_FW_Rdata1;
wire [31:0] D_FW_Rdata2;wire D_rst;wire [2:0] s_D_cmp;wire D_is_md;wire D_is_eret;wire D_is_delay;
//E
wire [31:0] E_Rdata1;wire [31:0] E_Rdata2;wire [31:0] E_instruction;wire [31:0] E_adder;wire [31:0] E_data2;wire[2:0] E_op;wire [31:0] E_ans;
wire [15:0] E_imm16;wire [1:0] s_E_data2;wire [31:0] E_pc;wire [4:0] E_Wreg;wire [4:0] E_rs;wire [4:0] E_rt;wire [31:0] E_FW_Rdata1;
wire [31:0] E_FW_Rdata2;wire E_rst;wire [31:0] E_GRF_Wdata;wire E_is_jal;wire [31:0] E_HL_data;wire E_MD_stall;wire E_GRF_WE;wire E_equal;
wire E_is_mtc0;wire[4:0] E_rd;wire E_is_delay;
//M
wire [31:0] M_instruction;wire [31:0] M_ans; wire [31:0] M_Rdata2; wire [31:0] M_adder; wire M_DM_WE; wire [31:0] M_pre_Rdata;wire [31:0] M_pc;
wire [4:0] M_Wreg;wire [4:0] M_rs;wire [4:0] M_rt;wire [31:0] M_FW_Rdata2;wire [31:0] M_GRF_Wdata;wire M_rst;wire M_is_jal;wire [31:0] M_Rdata;
wire [2:0] M_EXT_op;wire [3:0] M_data_byteen;wire [31:0] M_pre_Wdata;wire [31:0] M_Wdata;wire [31:0] M_HL_data;wire M_GRF_WE;wire M_equal;
wire [31:0] M_FW_GRF_Wdata;wire [4:0] M_ExcCode;wire CP0_WE;wire [4:0] M_CP0_RWreg;wire [31:0] M_CP0_Rdata;wire [31:0] EPCOut;wire EXLClr;
wire Req;wire [31:0] W_Rdata2;wire M_is_delay;wire M_is_mtc0;wire [4:0] M_rd;
//W
wire [31:0] W_ans;wire [31:0] W_instruction; wire [31:0] W_Rdata; wire [31:0] W_adder; wire [2:0] s_W_Wdata; wire [1:0] s_W_Wreg; wire W_GRF_WE;
wire [31:0] W_Wdata;wire [4:0] W_rd;wire [4:0] W_Wreg;wire [31:0] W_pc;wire [4:0] W_rs;wire [4:0] W_rt;wire W_rst;wire W_is_jal;wire [31:0] W_HL_data;
wire W_equal;wire [31:0] W_CP0_Rdata;wire W_is_delay;
//trans
wire [1:0] E_T_new;wire [1:0] M_T_new;wire [1:0] T_use_rs;wire [1:0] T_use_rt;wire stall;wire [1:0] s_D_rs_data;wire [1:0] s_D_rt_data;
wire  [1:0] s_E_rs_data;wire [1:0] s_E_rt_data;wire [1:0] s_M_rt_data;wire [2:0] s_M_GRF_Wdata;wire M_is_LW;wire M_is_SW;wire E_is_SW;
wire E_is_LW;wire W_is_LW;wire [2:0] s_E_GRF_Wdata;
//ExcCode
wire E_is_m;wire E_overflow;wire E_overflow_m;wire M_overflow;wire M_overflow_m;wire [4:0] ExcCode;

AT_controller AT_controller(
	.T_use_rs(T_use_rs),
	.T_use_rt(T_use_rt),
	.E_T_new(E_T_new),
	.M_T_new(M_T_new),
	.E_Wreg(E_Wreg),
	.M_Wreg(M_Wreg),
	.W_Wreg(W_Wreg),
	.D_rs(D_rs),
	.D_rt(D_rt),
	.E_rs(E_rs),
	.E_rt(E_rt),
	.E_rd(E_rd),
	.E_is_SW(E_is_SW),
	.E_is_LW(E_is_LW),
	.M_rs(M_rs),
	.M_rt(M_rt),
	.M_rd(M_rd),
	.W_rs(W_rs),
	.W_rt(W_rt),
	.M_is_LW(M_is_LW),
	.M_is_SW(M_is_SW),
	.W_is_LW(W_is_LW),
	.E_GRF_WE(E_GRF_WE),
	.M_GRF_WE(M_GRF_WE),
	.W_GRF_WE(W_GRF_WE),
	.D_is_md(D_is_md),
	.E_MD_stall(E_MD_stall),
	.D_is_eret(D_is_eret),
	.E_is_mtc0(E_is_mtc0),
	.M_is_mtc0(M_is_mtc0),
	.stall(stall),
	.s_D_rs_data(s_D_rs_data),
	.s_D_rt_data(s_D_rt_data),
	.s_E_rs_data(s_E_rs_data),
	.s_E_rt_data(s_E_rt_data),
	.s_M_rt_data(s_M_rt_data)
);
F_PC F_PC(
	.clk(clk),
	.rst(reset),
	.stall(stall),
	.M_REQ(Req),
	.F_npc(F_npc),
	.F_pc(F_pc)
);
controller F_controller(
	.instruction(D_instruction),
	.is_delay(F_is_delay)
);
//F_IM F_IM(
	//.F_pc(i_inst_addr),
	//.F_instruction(F_instruction)
//);
F_MUX_NPC_4_1 F_MUX_NPC_4_1(
	.F_pc(F_pc),
	.s_D_jump(s_D_jump),
	.D_equal(D_equal),
	.D_adder(D_adder),
	.D_imm16_EXT(D_imm16_EXT),
	.D_imm26_EXT(D_imm26_EXT),
	.D_Rdata1(D_FW_Rdata1),
	.M_CP0_EPCOut(EPCOut),
	.M_REQ(Req),
	.stall(stall),
	.rst(reset),
	.F_npc(F_npc)
);
F_D_register F_D_register(
	.clk(clk),
	.F_instruction(i_inst_rdata),
	.F_adder(i_inst_addr+32'b100),
	.F_pc(i_inst_addr),
	.F_rst(reset),
	.F_is_delay(F_is_delay),
	.D_is_eret(D_is_eret),
	.stall(stall),
	.rst(reset),
	.M_REQ(Req),
	.D_instruction(D_instruction),
	.D_adder(D_adder),
	.D_pc(D_pc),
	.D_rst(D_rst),
	.D_is_delay(D_is_delay)
);
controller D_controller(
	.instruction(D_instruction),
	.rs(D_rs),
	.rt(D_rt),
	.imm16(D_imm16),
	.imm26(D_imm26),
	.s_D_jump(s_D_jump),
	.s_D_cmp(s_D_cmp),
	.T_use_rs(T_use_rs),
	.T_use_rt(T_use_rt),
	.is_md(D_is_md),
	.is_eret(D_is_eret)
);
D_EXT D_EXT(
	.D_imm16(D_imm16),
	.D_imm26(D_imm26),
	.D_adder(D_adder),
	.D_pc(D_pc),
	.D_imm16_EXT(D_imm16_EXT),
	.D_imm26_EXT(D_imm26_EXT)
);
GRF GRF(
	.clk(clk),
	.rst(reset),
	.D_pc(D_pc),
	.D_Rreg1(D_rs),
	.D_Rreg2(D_rt),
	.W_Wreg(W_Wreg),
	.W_Wdata(W_Wdata),
	.W_WE(W_GRF_WE),
	.D_Rdata1(D_Rdata1),
	.D_Rdata2(D_Rdata2)
);
D_MUX_st_3_1 D_MUX_st_3_1(
	.D_Rdata1(D_Rdata1),
	.D_Rdata2(D_Rdata2),
	.s_D_rs_data(s_D_rs_data),
	.s_D_rt_data(s_D_rt_data),
	.E_GRF_Wdata(E_GRF_Wdata),
	.M_GRF_Wdata(M_FW_GRF_Wdata),
	.W_GRF_Wdata(W_Wdata),
	.D_FW_Rdata1(D_FW_Rdata1),
	.D_FW_Rdata2(D_FW_Rdata2)
);
D_CMP D_CMP(
	.D_Rdata1(D_FW_Rdata1),
	.D_Rdata2(D_FW_Rdata2),
	.s_D_cmp(s_D_cmp),
	.D_equal(D_equal)
);
D_E_register D_E_register(
	.clk(clk),
	.rst(reset),
	.D_Rdata1(D_FW_Rdata1),
	.D_Rdata2(D_FW_Rdata2),
	.D_instruction(D_instruction),
	.D_adder(D_adder),
	.D_pc(D_pc),
	.D_rs(D_rs),
	.D_rt(D_rt),
	.D_is_delay(D_is_delay),
	.stall(stall),
	.D_rst(D_rst),
	.D_equal(D_equal),
	.M_REQ(Req),
	.E_Rdata1(E_Rdata1),
	.E_Rdata2(E_Rdata2),
	.E_instruction(E_instruction),
	.E_adder(E_adder),
	.E_pc(E_pc),
	.E_rs(E_rs),
	.E_rt(E_rt),
	.E_rst(E_rst),
	.E_equal(E_equal),
	.E_is_delay(E_is_delay)
);
E_ALU E_ALU(
	.E_data1(E_FW_Rdata1),
	.E_data2(E_data2),
	.E_is_m(E_is_m),
	.E_op(E_op),
	.E_ans(E_ans),
	.E_overflow(E_overflow),
	.E_overflow_m(E_overflow_m)
);
E_MD E_MD(
	.clk(clk),
	.rst(reset),
	.E_instruction(E_instruction),
	.E_data1(E_FW_Rdata1),
	.E_data2(E_data2),
	.E_HL_data(E_HL_data),
	.E_MD_stall(E_MD_stall)
);
E_MUX_data2_3_1 E_MUX_data2_3_1(
	.E_Rdata2(E_FW_Rdata2),
	.E_imm16(E_imm16),
	.s_E_data2(s_E_data2),
	.E_data2(E_data2)
);
controller E_controller(
	.instruction(E_instruction),
	.equal(E_equal),
	.imm16(E_imm16),
	.s_E_data2(s_E_data2),
	.E_op(E_op),
	.E_T_new(E_T_new),
	.Wreg(E_Wreg),
	.is_SW(E_is_SW),
	.is_LW(E_is_LW),
	.is_m(E_is_m),
	.s_GRF_Wdata(s_E_GRF_Wdata),
	.GRF_WE(E_GRF_WE),
	.is_mtc0(E_is_mtc0),
	.rd(E_rd)
);
E_MUX_data12_3_1 E_MUX_data12_3_1(
	.s_E_rs_data(s_E_rs_data),
	.s_E_rt_data(s_E_rt_data),
	.M_GRF_Wdata(M_FW_GRF_Wdata),
	.W_GRF_Wdata(W_Wdata),
	.E_Rdata1(E_Rdata1),
	.E_Rdata2(E_Rdata2),
	.E_FW_Rdata1(E_FW_Rdata1),
	.E_FW_Rdata2(E_FW_Rdata2)
);
E_GRF_Wdata_3_1 E_GRF_Wdata_3_1(
	.s_E_GRF_Wdata(s_E_GRF_Wdata),
	.E_ans(E_ans),
	.E_adder(E_adder),
	.E_HL_data(E_HL_data),
	.E_is_jal(E_is_jal),
	.E_Rdata2(E_FW_Rdata2),
	.E_GRF_Wdata(E_GRF_Wdata)
);
E_M_register E_M_register(
	.clk(clk),
	.rst(reset),
	.E_ans(E_ans),
	.E_instruction(E_instruction),
	.E_Rdata2(E_FW_Rdata2),
	.E_adder(E_adder),
	.E_pc(E_pc),
	.E_rs(E_rs),
	.E_rt(E_rt),
	.E_rst(E_rst),
	.E_HL_data(E_HL_data),
	.E_equal(E_equal),
	.E_GRF_Wdata(E_GRF_Wdata),
	.E_overflow(E_overflow),
	.E_overflow_m(E_overflow_m),
	.E_is_delay(E_is_delay),
	.M_REQ(Req),
	.M_ans(M_ans),
	.M_instruction(M_instruction),
	.M_Rdata2(M_Rdata2),
	.M_adder(M_adder),
	.M_pc(M_pc),
	.M_rs(M_rs),
	.M_rt(M_rt),
	.M_rst(M_rst),
	.M_HL_data(M_HL_data),
	.M_equal(M_equal),
	.M_FW_GRF_Wdata(M_FW_GRF_Wdata),
	.M_overflow(M_overflow),
	.M_overflow_m(M_overflow_m),
	.M_is_delay(M_is_delay)
);
M_EXT M_EXT(
	.M_pre_Rdata(m_data_rdata),
	.M_adress(M_ans),
	.M_EXT_op(M_EXT_op),
	.M_Rdata(M_Rdata)
);
Exccoder M_Exccoder(
	.M_pc(M_pc),
	.M_instruction(M_instruction),
	.M_adress(M_ans),
	.M_overflow(M_overflow),
	.M_overflow_m(M_overflow_m),
	.HWInt(HWInt),
	.M_ExcCode(M_ExcCode)
);
controller M_controller(
	.instruction(M_instruction),
	.equal(M_equal),
	.Req(Req),
	.M_adress(M_ans),
	.M_pre_Wdata(M_FW_Rdata2),
	.DM_WE(M_DM_WE),
	.M_T_new(M_T_new),
	.Wreg(M_Wreg),
	.s_GRF_Wdata(s_M_GRF_Wdata),
	.is_LW(M_is_LW),
	.is_SW(M_is_SW),
	.M_EXT_op(M_EXT_op),
	.M_data_byteen(M_data_byteen),
	.M_Wdata(M_Wdata),
	.GRF_WE(M_GRF_WE),
	.CP0_WE(CP0_WE),
	.M_CP0_RWreg(M_CP0_RWreg),
	.EXLClr(EXLClr),
	.is_mtc0(M_is_mtc0),
	.rd(M_rd)
);
M_GRF_Wdata_3_1 M_GRF_Wdata_3_1(
	.M_ans(M_ans),
	.M_Rdata(M_Rdata),
	.M_adder(M_adder),
	.s_M_GRF_Wdata(s_M_GRF_Wdata),
	.M_is_jal(M_is_jal),
	.M_HL_data(M_HL_data),
	.M_Rdata2(M_FW_Rdata2),
	.M_CP0_Rdata(M_CP0_Rdata),
	.M_GRF_Wdata(M_GRF_Wdata)
);
M_MUX_Rdata2_3_1 M_MUX_Rdata2_3_1(
	.s_M_rt_data(s_M_rt_data),
	.M_Rdata2(M_Rdata2),
	.W_GRF_Wdata(W_Wdata),
	.M_FW_Rdata2(M_FW_Rdata2)
);
CP0 M_CP0(
	.clk(clk),
	.reset(reset),
	.en(CP0_WE),
	.CP0Add(M_CP0_RWreg),
	.CP0In(M_GRF_Wdata),
	.CP0Out(M_CP0_Rdata),
	.VPC(M_pc),
	.BDIn(M_is_delay),
	.ExcCodeIn(M_ExcCode),
	.HWInt(HWInt),
	.EXLClr(EXLClr),
	.EPCOut(EPCOut),
	.Req(Req)
);
M_W_register M_W_register(
	.clk(clk),
	.rst(reset),
	.M_ans(M_ans),
	.M_instruction(M_instruction),
	.M_Rdata(M_Rdata),
	.M_adder(M_adder),
	.M_pc(M_pc),
	.M_rs(M_rs),
	.M_rt(M_rt),
	.M_rst(M_rst),
	.M_Rdata2(M_FW_Rdata2),
	.M_HL_data(M_HL_data),
	.M_equal(M_equal),
	.M_CP0_Rdata(M_CP0_Rdata),
	.M_REQ(Req),
	.W_ans(W_ans),
	.W_instruction(W_instruction),
	.W_Rdata(W_Rdata),
	.W_adder(W_adder),
	.W_pc(W_pc),
	.W_rs(W_rs),
	.W_rt(W_rt),
	.W_rst(W_rst),
	.W_Rdata2(W_Rdata2),
	.W_HL_data(W_HL_data),
	.W_equal(W_equal),
	.W_CP0_Rdata(W_CP0_Rdata)
);
controller W_controller(
	.instruction(W_instruction),
	.rt(W_rt),
	.rd(W_rd),
	.s_GRF_Wdata(s_W_Wdata),
	.s_W_Wreg(s_W_Wreg),
	.GRF_WE(W_GRF_WE),
	.is_LW(W_is_LW)
);
W_MUX_Wdata_3_1 W_MUX_Wdata_3_1(
	.W_ans(W_ans),
	.W_Rdata(W_Rdata),
	.W_adder(W_adder),
	.s_W_Wdata(s_W_Wdata),
	.W_is_jal(W_is_jal),
	.W_Rdata2(W_Rdata2),
	.W_HL_data(W_HL_data),
	.W_CP0_Rdata(W_CP0_Rdata),
	.W_Wdata(W_Wdata)
);
W_MUX_Wreg_3_1 W_MUX_Wreg_3_1(
	.s_W_Wreg(s_W_Wreg),
	.W_rd(W_rd),
	.W_rt(W_rt),
	.W_Wreg(W_Wreg)
);
always @(posedge clk) begin
		
		//if(M_DM_WE && (!M_rst) ) $display("%d@%h: *%h <= %h",$time,M_pc, M_ans, M_Rdata2);
		//if(W_GRF_WE && (!W_rst) ) $display("%h",W_instruction);
	end

endmodule
