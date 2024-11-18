`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:16:41 11/14/2023 
// Design Name: 
// Module Name:    M_controller 
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

`define ADD_FUN 6'b100000 //funct
`define SUB_FUN 6'b100010
`define JR_FUN 6'b001000
`define OR_FUN 6'b100101
`define SLT_FUN 6'b101010
`define SLTU_FUN 6'b101011
`define AND_FUN 6'b100100

`define NONE 3'b000//M_EXT_op
`define U_BYTE 3'b001
`define S_BYTE 3'b010
`define U_HALFWORD 3'b011
`define S_HALFWORD 3'b100

`define WORD 4'b1111//M_data_byteen
`define BYTE_1 4'b0001
`define BYTE_2 4'b0010
`define BYTE_3 4'b0100
`define BYTE_4 4'b1000
`define HALF_1 4'b0011
`define HALF_2 4'b1100
 module M_controller(
    input [31:0] M_instruction,
	 input [31:0] adress,
    output M_DM_WE,
	 output [1:0] M_T_new,
	 output [4:0] M_Wreg,
	 output [1:0] s_M_GRF_Wdata,
	 output M_is_jal,
	 output M_is_LW,
	 output M_is_SW,
	 output [2:0] M_EXT_op,
	 output [3:0] M_data_byteen
    );
	 wire [5:0] special;
	 wire [5:0] funct;
	 assign special=M_instruction[31:26];
	 assign funct=M_instruction[5:0];
	 
	 wire add,sub,ori,lui,lw,sw,beq,jal,jr,_or,slt,sltu,bne,addi,_and,andi,lb,lh,sb,sh;
	 assign add=(special==`R&&funct==`ADD_FUN);
	 assign sub=(special==`R&&funct==`SUB_FUN);
	 assign ori=(special==`ORI);
	 assign lui=(special==`LUI);
	 assign lw=(special==`LW);
	 assign sw=(special==`SW);
	 assign beq=(special==`BEQ);
	 assign jal=(special==`JAL);
	 assign jr=(special==`R&&funct==`JR_FUN);
	 assign _or=(special==`R&&funct==`OR_FUN);
	assign slt=(special==`R&&funct==`SLT_FUN);
	assign sltu=(special==`R&&funct==`SLTU_FUN);
	assign bne=(special==`BNE);
	assign addi=(special==`ADDI);
	assign _and=(speical==`R&&funct==`ADD_FUN);
	assign andi=(speical==`ANDI);
	assign lb=(special==`LB);
	assign lh=(special==`LH);
	assign sb=(special==`SB);
	assign sh=(special==`SH);
	 
	 assign M_is_jal=jal;
	 assign M_is_LW=lw||lb||lh;
	 assign M_is_SW=sw||sb;
	 
	assign M_DM_WE=(sw||sb||sh)?1'b1:1'b0;
	assign M_T_new=(add||sub||ori||lui||sw||beq||jal||jr||_or||slt||sltu||bne||addi||_and||andi||sb||sh)?2'b00:
													(lw||lb||lh)?2'b01:
													2'b00;
													
	wire [4:0] rt;
	wire [4:0] rd;
	assign rt=M_instruction[20:16];
	assign rd=M_instruction[15:11];
	
	assign M_Wreg=(add||sub||_or||slt||sltu||_and)?rd:
												(ori||lui||lw||addi||andi||lb||lh)?rt:
												(jal)?5'd31:
												5'b0;
	assign s_M_GRF_Wdata[1]=(jal)?1'b1:1'b0;
	assign s_M_GRF_Wdata[0]=(lw||lb||lh)?1'b1:1'b0;
	
	assign M_EXT_op=(lb)?`S_BYTE:
													(lh)?`S_HALFWORD:
													`NONE;
													
	wire low;
	assign low=M_adress[1:0];
	wire [3:0] M_byte_data_byteen;
	assign M_byte_data_byteen=(low==2'b00)?`BYTE_1:
																				(low==2'b01)?`BYTE_2:
																				(low==2'b10)?`BYTE_3:
																				(low==2'b11)?`BYTE_4:
																				`BYTE_1;
	wire [3:0] M_half_data_byteen;
	assign M_byte_data_byteen=(low==2'b00||low==2'b01)?`HALF_1:
																				(low==2'b10||low==2'b11)?`HALF_2:
																				`HALF_1;
	assign M_data_byteen=(sw)?`WORD:
																(sb)?M_byte_data_byteen:
																(sh)?M_half_data_byteen:
																`WORD;
endmodule
