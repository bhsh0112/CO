`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:06:27 12/01/2023 
// Design Name: 
// Module Name:    controller 
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

`define ADD_FUN 6'b100000 //funct
`define SUB_FUN 6'b100010
`define JR_FUN 6'b001000

`define BEQ_CMP 2'b00

`define JUMP_ADDER 2'b00
`define JUMP_IMM16 2'b01
`define JUMP_IMM26 2'b10
`define JUMP_RDATA1 2'b11

`define ADD_OP 3'b000  //op
`define SUB_OP 3'b001
`define OR_OP 3'b010
`define LUI_OP 3'b011
`define SWC_OP 3'b100

`define DATA2_RDATA2 2'b00//s_E_data2
`define DATA2_EXT 2'b01
`define DATA2_ZERO_EXT 2'b10

`define WDATA_ANS 2'b00//s_GRF_Wdata
`define WDATA_RDATA 2'b01
`define WDATA_ADDER 2'b10

`define RD 2'b00//s_W_Wreg
`define RT 2'b01
`define RA 2'b10
module controller(
    input [31:0] instruction,
    input equal,
	 output [4:0] rs,
    output [4:0] rt,
	 output [4:0] rd,
    output [15:0] imm16,
    output [25:0] imm26,
	 output [1:0] s_D_jump,
	 output [1:0] T_use_rs,
	 output [1:0] T_use_rt,
	 output [1:0] s_D_cmp,
    output [1:0] s_E_data2,
    output [2:0] E_op,
	 output [1:0] E_T_new,
	 output [1:0] M_T_new,
	 output [4:0] Wreg,
	 output is_LW,
	 output is_SW,
	 output  [1:0] s_GRF_Wdata,
	 output GRF_WE,
	 output DM_WE,
    output [1:0] s_W_Wreg
    );
	 //rs,rt,rd
	 assign rs=instruction[25:21];
	assign rt=instruction[20:16];
	assign rd=instruction[15:11];
	
	//imm16,imm26
	assign imm16=instruction[15:0];
	assign imm26=instruction[25:0];
	
	//judge the type of instruction##############################
	wire [5:0] special;
	 wire [5:0] funct;
	 assign special=instruction[31:26];
	 assign funct=instruction[5:0];
	 
	wire add,sub,ori,lui,lw,sw,beq,jal,jr;//change
	 assign add=(special==`R&&funct==`ADD_FUN);
	 assign sub=(special==`R&&funct==`SUB_FUN);
	 assign ori=(special==`ORI);
	 assign lui=(special==`LUI);
	 assign lw=(special==`LW);
	 assign sw=(special==`SW);
	 assign beq=(special==`BEQ);
	 assign jal=(special==`JAL);
	 assign jr=(special==`R&&funct==`JR_FUN);
	 //change
	
	//signal for jump########################################
	assign s_D_jump=(beq)?`JUMP_IMM16:
													(jal)?`JUMP_IMM26:
													(jr)?`JUMP_RDATA1:
													`JUMP_ADDER;
	
	//compute tuse###########################################
	 assign T_use_rs=(add||sub||ori||lw||sw)?2'b01:
											(beq||jr)?2'b00:
											(lui||jal)?2'b11:
											2'b11;
	 assign T_use_rt=(add||sub)?2'b01:
													(sw)?2'b10:
													(beq)?2'b0:
													(ori||lui||lw||jal||jr)?2'b11:
													2'b11;
											
	//siganl for the way to compare#########################################
	assign s_D_cmp=(beq)?`BEQ_CMP:
													//change
													`BEQ_CMP;

	//special signal for trans
	 assign is_SW=sw;
	 assign is_LW=lw;
	
	//signal for choosing s_E_data2#######################################
	assign s_E_data2=(lui||sw||lw)?`DATA2_EXT:
														(ori)?`DATA2_ZERO_EXT:
														`DATA2_RDATA2;
	
	//op for ALU######################################################
	assign E_op=(add||lw||sw)?`ADD_OP:
										(sub)?`SUB_OP:
										(ori)?`OR_OP:
										(lui)?`LUI_OP:
										//change
										`ADD_OP;
		
	//compute Tnew#######################################################
	assign E_T_new=(add||sub||ori||lui)?2'b01:
													(lw)?2'b10:
													(sw||beq||jal||jr)?2'b00:
													2'b00;
	
	//Wreg########################################################
	assign Wreg=(add||sub)?rd:
												(ori||lui||lw)?rt:
												(jal)?5'd31:
												5'b0;
	
 //signal for choosing GRF_Wdata	#####################################################
	assign s_GRF_Wdata=(lw)?`WDATA_RDATA:
																(jal)?`WDATA_ADDER:
																`WDATA_ANS;
	
	//GRF_WE########################################################################################
	assign GRF_WE=(add||sub||ori||lw||jal||lui)?1'b1:1'b0;
	
	//DM_WE########################################################################################
	assign DM_WE=(sw)?1'b1:1'b0;
	
	//compute Tnew###################################################################################
	assign M_T_new=(add||sub||ori||lui||sw||beq||jal||jr)?2'b00:
													(lw)?2'b01:
													2'b00;
	
	
	//signal for choosing Wreg#######################################################################
	assign s_W_Wreg=(ori||lui||lw)?`RT:
														(jal)?`RA:
														`RD;
endmodule
