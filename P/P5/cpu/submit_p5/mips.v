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
//////////////////////////////////////////////////////////////////////////////////
module mips(
    input clk,
    input reset
    );
//F
wire [31:0] F_npc;wire [31:0] F_pc;wire [31:0] F_instruction;
//D
wire [1:0] s_D_jump;wire D_equal;wire [31:0] D_adder;wire [31:0] D_pc;wire [31:0] D_imm16_EXT;wire [31:0] D_imm26_EXT;wire [31:0] D_Rdata1;
wire [31:0] D_instruction;wire [4:0] D_rs;wire [4:0] D_rt;wire [15:0] D_imm16;wire [25:0] D_imm26;wire [31:0] D_Rdata2;wire [31:0] D_FW_Rdata1;
wire [31:0] D_FW_Rdata2;wire D_rst;wire [2:0] s_D_cmp;
//E
wire [31:0] E_Rdata1;wire [31:0] E_Rdata2;wire [31:0] E_instruction;wire [31:0] E_adder;wire [31:0] E_data2;wire[2:0] E_op;wire [31:0] E_ans;
wire [15:0] E_imm16;wire [1:0] s_E_data2;wire [31:0] E_pc;wire [4:0] E_Wreg;wire [4:0] E_rs;wire [4:0] E_rt;wire [31:0] E_FW_Rdata1;
wire [31:0] E_FW_Rdata2;wire E_rst;wire [31:0] E_GRF_Wdata;wire E_is_jal;
//M
wire [31:0] M_instruction;wire [31:0] M_ans; wire [31:0] M_Rdata2; wire [31:0] M_adder; wire M_DM_WE; wire [31:0] M_Rdata;wire [31:0] M_pc;
wire [4:0] M_Wreg;wire [4:0] M_rs;wire [4:0] M_rt;wire [31:0] M_FW_Rdata2;wire [31:0] M_GRF_Wdata;wire M_rst;wire M_is_jal;
//W
wire [31:0] W_ans;wire [31:0] W_instruction; wire [31:0] W_Rdata; wire [31:0] W_adder; wire [1:0] s_W_Wdata; wire [1:0] s_W_Wreg; wire W_GRF_WE;
wire [31:0] W_Wdata;wire [4:0] W_rd;wire [4:0] W_Wreg;wire [31:0] W_pc;wire [4:0] W_rs;wire [4:0] W_rt;wire W_rst;wire W_is_jal;
//trans
wire [1:0] D_T_new;wire [1:0] E_T_new;wire [1:0] M_T_new;wire [1:0] T_use_rs;wire [1:0] T_use_rt;wire stall;wire [1:0] s_D_rs_data;wire [1:0] s_D_rt_data;
wire  [1:0] s_E_rs_data;wire [1:0] s_E_rt_data;wire [1:0] s_M_rt_data;wire [1:0] s_M_GRF_Wdata;wire M_is_LW;wire M_is_SW;wire E_is_SW;
wire E_is_LW;wire W_is_LW;wire [1:0] s_E_GRF_Wdata;
AT_controller AT_controller(
	.T_use_rs(T_use_rs),
	.T_use_rt(T_use_rt),
	.E_T_new(E_T_new),
	.M_T_new(M_T_new),
	.D_T_new(D_T_new),
	.E_Wreg(E_Wreg),
	.M_Wreg(M_Wreg),
	.W_Wreg(W_Wreg),
	.D_rs(D_rs),
	.D_rt(D_rt),
	.E_rs(E_rs),
	.E_rt(E_rt),
	.E_is_SW(E_is_SW),
	.E_is_LW(E_is_LW),
	.M_rs(M_rs),
	.M_rt(M_rt),
	.W_rs(W_rs),
	.W_rt(W_rt),
	.M_is_LW(M_is_LW),
	.M_is_SW(M_is_SW),
	.W_is_LW(W_is_LW),
	.W_GRF_WE(W_GRF_WE),
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
	.F_npc(F_npc),
	.F_pc(F_pc)
);
F_IM F_IM(
	.F_pc(F_pc),
	.F_instruction(F_instruction)
);
F_MUX_NPC_4_1 F_MUX_NPC_4_1(
	.F_pc(F_pc),
	.s_D_jump(s_D_jump),
	.D_equal(D_equal),
	.D_adder(D_adder),
	.D_imm16_EXT(D_imm16_EXT),
	.D_imm26_EXT(D_imm26_EXT),
	.D_Rdata1(D_FW_Rdata1),
	.stall(stall),
	.rst(reset),
	.F_npc(F_npc)
);
F_D_register F_D_register(
	.clk(clk),
	.F_instruction(F_instruction),
	.F_adder(F_pc+32'b100),
	.F_pc(F_pc),
	.F_rst(reset),
	.stall(stall),
	.rst(reset),
	.D_instruction(D_instruction),
	.D_adder(D_adder),
	.D_pc(D_pc),
	.D_rst(D_rst)
);
D_controller D_controller(
	.D_instruction(D_instruction),
	.D_rs(D_rs),
	.D_rt(D_rt),
	.D_imm16(D_imm16),
	.D_imm26(D_imm26),
	.s_D_jump(s_D_jump),
	.s_D_cmp(s_D_cmp),
	.T_use_rs(T_use_rs),
	.T_use_rt(T_use_rt),
	.D_T_new(D_T_new)
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
	.M_GRF_Wdata(M_GRF_Wdata),
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
	.stall(stall),
	.D_rst(D_rst),
	.E_Rdata1(E_Rdata1),
	.E_Rdata2(E_Rdata2),
	.E_instruction(E_instruction),
	.E_adder(E_adder),
	.E_pc(E_pc),
	.E_rs(E_rs),
	.E_rt(E_rt),
	.E_rst(E_rst)
);
E_ALU E_ALU(
	.E_data1(E_FW_Rdata1),
	.E_data2(E_data2),
	.E_op(E_op),
	.E_ans(E_ans)
);
E_MUX_data2_3_1 E_MUX_data2_3_1(
	.E_Rdata2(E_FW_Rdata2),
	.E_imm16(E_imm16),
	.s_E_data2(s_E_data2),
	.E_data2(E_data2)
);
E_controller E_controller(
	.E_instruction(E_instruction),
	.E_imm16(E_imm16),
	.s_E_data2(s_E_data2),
	.E_op(E_op),
	.E_T_new(E_T_new),
	.E_Wreg(E_Wreg),
	.E_is_SW(E_is_SW),
	.E_is_LW(E_is_LW),
	.E_is_jal(E_is_jal),
	.s_E_GRF_Wdata(s_E_GRF_Wdata)
);
E_MUX_data12_3_1 E_MUX_data12_3_1(
	.s_E_rs_data(s_E_rs_data),
	.s_E_rt_data(s_E_rt_data),
	.M_GRF_Wdata(M_GRF_Wdata),
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
	.E_is_jal(E_is_jal),
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
	.M_ans(M_ans),
	.M_instruction(M_instruction),
	.M_Rdata2(M_Rdata2),
	.M_adder(M_adder),
	.M_pc(M_pc),
	.M_rs(M_rs),
	.M_rt(M_rt),
	.M_rst(M_rst)
);
M_DM M_DM(
	.clk(clk),
	.rst(reset),
	.M_WE(M_DM_WE),
	.M_adress(M_ans),
	.M_Wdata(M_FW_Rdata2),
	.M_Rdata(M_Rdata)
);
M_controller M_controller(
	.M_instruction(M_instruction),
	.M_DM_WE(M_DM_WE),
	.M_T_new(M_T_new),
	.M_Wreg(M_Wreg),
	.s_M_GRF_Wdata(s_M_GRF_Wdata),
	.M_is_LW(M_is_LW),
	.M_is_SW(M_is_SW),
	.M_is_jal(M_is_jal)
);
M_GRF_Wdata_3_1 M_GRF_Wdata_3_1(
	.M_ans(M_ans),
	.M_Rdata(M_Rdata),
	.M_adder(M_adder),
	.s_M_GRF_Wdata(s_M_GRF_Wdata),
	.M_is_jal(M_is_jal),
	.M_GRF_Wdata(M_GRF_Wdata)
);
M_MUX_Rdata2_3_1 M_MUX_Rdata2_3_1(
	.s_M_rt_data(s_M_rt_data),
	.M_Rdata2(M_Rdata2),
	.W_GRF_Wdata(W_Wdata),
	.M_FW_Rdata2(M_FW_Rdata2)
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
	.W_ans(W_ans),
	.W_instruction(W_instruction),
	.W_Rdata(W_Rdata),
	.W_adder(W_adder),
	.W_pc(W_pc),
	.W_rs(W_rs),
	.W_rt(W_rt),
	.W_rst(W_rst)
);
W_controller W_controller(
	.W_instruction(W_instruction),
	.W_rt(W_rt),
	.W_rd(W_rd),
	.s_W_Wdata(s_W_Wdata),
	.s_W_Wreg(s_W_Wreg),
	.W_GRF_WE(W_GRF_WE),
	.W_is_jal(W_is_jal),
	.W_is_LW(W_is_LW)
);
W_MUX_Wdata_3_1 W_MUX_Wdata_3_1(
	.W_ans(W_ans),
	.W_Rdata(W_Rdata),
	.W_adder(W_adder),
	.s_W_Wdata(s_W_Wdata),
	.W_is_jal(W_is_jal),
	.W_Wdata(W_Wdata)
);
W_MUX_Wreg_3_1 W_MUX_Wreg_3_1(
	.s_W_Wreg(s_W_Wreg),
	.W_rd(W_rd),
	.W_rt(W_rt),
	.W_Wreg(W_Wreg)
);
always @(posedge clk) begin
		if(M_DM_WE && (!M_rst) ) $display("%d@%h: *%h <= %h",$time,M_pc, M_ans, M_Rdata2);
		if(W_GRF_WE && (!W_rst) ) $display("%d@%h: $%d <= %h",$time, W_pc, W_Wreg,W_Wdata);
	end

endmodule
