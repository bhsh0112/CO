`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:06:21 10/31/2023 
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
	 
	 //lines
	 wire [31:0] npc;
	 wire [31:0] pc;
	 wire [31:0] adder;
	 wire [15:0] imm16;
	wire [25:0] imm26;
	wire [31:0] Rdata1;
	wire [31:0] instruction;
	wire [5:0] special;
	wire [4:0] rs;
	wire [4:0] rt;
	wire [4:0] rd;
	wire [5:0] funct;
	wire GRF_WE;
	//wire [4:0] Rreg1;
	//wire [4:0] Rreg2;
	wire [4:0] Wreg;
	wire [31:0] Wdata;
	wire [31:0] Rdata2;
	//wire [31:0] data1;
	wire [31:0] data2;
	wire [2:0] op;
	wire [31:0] ans;
	wire equal;
	wire [31:0] EXT_ans;
	wire DM_WE;
	//wire [31:0] adress;
	//wire [31:0] memdata;
	wire [31:0] Rdata;
	wire brunch;
	wire [1:0] s_Wreg;
	wire [1:0] s_Wdata;
	wire EXT_s;
	wire zero_EXT_s;
	wire jump;
	wire [2:0] ALU_op;
	wire is_jr;
	wire r;
	
	
	
	PC PC(.clk(clk),.rst(reset),.npc(npc),.pc(pc));
	MUX_PC_3_1 MUX_PC_3_1(.pc(pc),.imm26(imm26),.Rdata1(Rdata1),.imm16(imm16),.brunch(brunch),.equal(equal),.jump(jump),.is_jr(is_jr),.adder(adder),.npc(npc));
	IM IM(.pc(pc),.instruction(instruction));
	divider divider(.instruction(instruction),.special(special),.rs(rs),.rt(rt),.rd(rd),.funct(funct),.imm16(imm16),.imm26(imm26));
	MUX_Wreg_3_1 MUX_Wreg_3_1(.rt(rt),.rd(rd),.s_Wreg(s_Wreg),.Wreg(Wreg));
	MUX_Wdata_3_1 MUX_Wdata_3_1(.ans(ans),.Rdata(Rdata),.adder(adder),.s_Wdata(s_Wdata),.Wdata(Wdata));
	GRF GRF(.clk(clk),.rst(reset),.pc(pc),.WE(GRF_WE),.Rreg1(rs),.Rreg2(rt),.Wreg(Wreg),.Wdata(Wdata),.Rdata1(Rdata1),.Rdata2(Rdata2));
	MUX_EXT_2_1 MUX_EXT_2_1(.imm16(imm16),.zero_EXT_s(zero_EXT_s),.EXT_ans(EXT_ans));
	MUX_data2_2_1 MUX_data2_2_1(.EXT_ans(EXT_ans),.Rdata2(Rdata2),.EXT_s(EXT_s),.data2(data2));
	ALU ALU(.data1(Rdata1),.data2(data2),.op(op),.ans(ans),.zero(equal));
	DM DM(.clk(clk),.WE(DM_WE),.rst(reset),.pc(pc),.adress(ans),.Wdata(Rdata2),.Rdata(Rdata));
	contrller contrller(.special(special),.brunch(brunch),.s_Wreg(s_Wreg),.s_Wdata(s_Wdata),.EXT_s(EXT_s),.GRF_WE(GRF_WE),.DM_WE(DM_WE),.zero_EXT_s(zero_EXT_s),.jump(jump),.ALU_op(ALU_op),.r(r));
	contrller_ALU contrller_ALU(.funct(funct),.ALU_op(ALU_op),.op(op),.is_jr(is_jr),.r(r));
	always @(posedge clk) begin
		if(DM_WE && (!reset) ) $display("@%h: *%h <= %h", pc, ans, Rdata2);
		if(GRF_WE && (!reset) &&  (instruction!=32'h00000000) && !(special==6'b000000 && funct==5'b01000)) $display("@%h: $%d <= %h", pc, Wreg,Wdata);
	end
endmodule
