`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:01:52 12/05/2023 
// Design Name: 
// Module Name:    Exccoder 
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
`define R 6'b000000//special
`define ORI 6'b001101
`define LUI  6'b001111
`define LW 6'b100011
`define SW 6'b101011
`define BEQ 6'b000100
`define JAL 6'b000011
`define BNE 6'b000101
`define ADDI 6'b001000
`define ANDI 6'b001100
`define LB 6'b100000
`define LH 6'b100001
`define SB 6'b101000
`define SH 6'b101001
`define COP0 6'b010000

`define ADD_FUN 6'b100000 //funct
`define SUB_FUN 6'b100010
`define JR_FUN 6'b001000
`define OR_FUN 6'b100101
`define SLT_FUN 6'b101010
`define SLTU_FUN 6'b101011
`define AND_FUN 6'b100100
`define MULT_FUN 6'b011000
`define DIV_FUN 6'b011010
`define MULTU_FUN 6'b011001
`define DIVU_FUN 6'b011011
`define MFHI_FUN 6'b010000
`define MFLO_FUN 6'b010010
`define MTHI_FUN 6'b010001
`define MTLO_FUN 6'b010011
`define SYSCALL_FUN 6'b001100
`define ERET_FUN 6'b011000

`define MFC0_RS 5'b00000
`define MTC0_RS 5'b00100
module Exccoder(
	 input [31:0] M_pc,
    input [31:0] M_instruction,
    input [31:0] M_adress,
    input M_overflow,
    input M_overflow_m,
	 input [5:0] HWInt,
	 input [3:0] M_byteen,
    output [4:0] M_ExcCode
    );

	wire [5:0] special;
	 wire [5:0] funct;
	 wire [5:0] rs;
	 assign special=M_instruction[31:26];
	 assign rs=M_instruction[25:21];
	 assign funct=M_instruction[5:0];
	 
	wire add,sub,ori,lui,lw,sw,beq,jal,orr,slt,sltu,bne,addi,andr,andi,lb,lh,sb,sh,mult,multu,div,divu,mfhi,mflo,mthi,mtlo,syscall,mfc0,mtc0,eret,nop;
	 assign add=(special==`R&&funct==`ADD_FUN);
	 assign sub=(special==`R&&funct==`SUB_FUN);
	 assign ori=(special==`ORI);
	 assign lui=(special==`LUI);
	 assign lw=(special==`LW);
	 assign sw=(special==`SW);
	 assign beq=(special==`BEQ);
	 assign jal=(special==`JAL);
	 assign jr=(special==`R&&funct==`JR_FUN);
	 assign orr=(special==`R&&funct==`OR_FUN);
	 assign slt=(special==`R&&funct==`SLT_FUN);
	 assign sltu=(special==`R&&funct==`SLTU_FUN);
	 assign bne=(special==`BNE);
	 assign addi=(special==`ADDI);
	 assign andr=(special==`R&&funct==`AND_FUN);
	 assign andi=(special==`ANDI);
	 assign lb=(special==`LB);
	 assign lh=(special==`LH);
	 assign sb=(special==`SB);
	 assign sh=(special==`SH);
	  assign mult=(special==`R&&funct==`MULT_FUN);
	 assign div=(special==`R&&funct==`DIV_FUN);
	 assign multu=(special==`R&&funct==`MULTU_FUN);
	 assign divu=(special==`R&&funct==`DIVU_FUN);
	 assign mflo=(special==`R&&funct==`MFLO_FUN);
	 assign mfhi=(special==`R&&funct==`MFHI_FUN);
	 assign mtlo=(special==`R&&funct==`MTLO_FUN);
	 assign mthi=(special==`R&&funct==`MTHI_FUN);
	 assign syscall=(special==`R&&funct==`SYSCALL_FUN);
	 assign mfc0=(special==`COP0&&rs==`MFC0_RS);
	 assign mtc0=(special==`COP0&&rs==`MTC0_RS);
	 assign eret=(special==`COP0&&funct==`ERET_FUN);
	 assign nop=(special==6'b0&&funct==6'b0);
	
	wire Int;wire AdEL;wire AdEL_pc;wire AdEL_load;wire AdES;wire Syscall;wire RI;wire Ov;wire overflow;wire overflow_m;

	assign overflow=(add||addi||sub)&&M_overflow;
	assign overflow_m=(lw||lh||lb||sw||sh||sb)&&M_overflow_m;
	
	assign Int=(|HWInt);
	assign AdEL_pc=((M_pc[1:0]!=2'b0||M_pc<32'h3000||M_pc>32'h6ffc)&&(M_pc!=32'b0));
	assign AdEL_load=(lw&&M_adress[1:0]!=2'b0)?1'b1:
														(lh&&M_adress[0]!=1'b0)?1'b1:
														((lh||lb)&&(M_adress>=32'h7f00&&M_adress<=32'h7f1b))?1'b1:
														((lw||lh||lb)&&(overflow_m))?1'b1:
														((lw||lh||lb)&&(M_adress>32'h7f23||(M_adress>32'h7f0b&&M_adress<32'h7f10)||(M_adress>32'h7f1b&&M_adress<32'h7f20)||(M_adress>32'h2fff&&M_adress<32'h7f00)))?1'b1:
														1'b0;
	assign AdEL=AdEL_pc||AdEL_load;
	
	assign AdES=(sw&&M_adress[1:0]!=2'b0)?1'b1:
														(sh&&M_adress[0]!=1'b0)?1'b1:
														((sh||sb)&&(M_adress>=32'h7f00&&M_adress<=32'h7f1b))?1'b1:
														((sw||sh||sb)&&(overflow_m))?1'b1:
														((sw||sh||sb)&&((M_adress==32'h7f08)||(M_adress==32'h7f18)))?1'b1:
														((sw||sh||sb)&&(M_adress>32'h7f23||(M_adress>32'h7f0b&&M_adress<32'h7f10)||(M_adress>32'h7f1b&&M_adress<32'h7f20)||(M_adress>32'h2fff&&M_adress<32'h7f00)))?1'b1:
														1'b0;
	
	assign RI=~(add||sub||ori||lui||lw||sw||beq||jal||jr||orr||slt||sltu||bne||addi||andr||andi||lb||lh||sb||sh||mult||multu||div||divu||mfhi||mflo||mthi||mtlo||syscall||mfc0||mtc0||eret||nop);
	
	assign M_ExcCode=
												 (Int)?5'b0:
												 (AdEL_pc)?5'd4:
												 (syscall)?5'd8:
												 (RI)?5'd10:
												 (overflow)?5'd12:
												 (AdEL_load)?5'd4:
												 (AdES)?5'd5:
												 5'd0;
endmodule
