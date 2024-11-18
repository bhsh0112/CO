`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:28:53 11/14/2023 
// Design Name: 
// Module Name:    W_controller 
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
`define R 6'b000000 //special
`define ORI 6'b001101
`define LUI  6'b001111
`define LW 6'b100011
`define JAL 6'b000011
`define SWC 6'b101010


`define ADD_FUN 6'b100000 //funct
`define SUB_FUN 6'b100010
`define SWC_FUN 6'b101110

`define W_ANS 2'b00//s_W_GRF_Wdata
`define W_RDATA 2'b01
`define W_ADDER 2'b10

`define RD 2'b00//s_W_Wreg
`define RT 2'b01
`define RA 2'b10

module W_controller(
    input [31:0] W_instruction,
	 input W_equal,
	 output [4:0] W_rt,
	 output [4:0] W_rd,
    output [1:0] s_W_Wdata,
    output [1:0] s_W_Wreg,
    output W_GRF_WE,
	 output W_is_LW
    );
	//judge the type of instruction
	wire [5:0] special;
	wire [5:0] funct;
	assign special=W_instruction[31:26];
	assign funct=W_instruction[5:0];
	
	wire add,sub,ori,lui,lw,jal;
	assign add=(special==`R&&funct==`ADD_FUN);
	assign sub=(special==`R&&funct==`SUB_FUN);
	assign lui=(special==`LUI);
	assign ori=(special==`ORI);
	assign lw=(special==`LW);
	assign jal=(special==`JAL);
	assign swc=(special==`SWC&&funct==`SWC_FUN);

	
	//special signal for trans
	assign W_is_LW=lw;
	
	//GRF_WE
	assign W_GRF_WE=(add||sub||ori||lw||jal||lui||swc)?1'b1:1'b0;
	
	//signal for choosing Wdata
	assign s_W_Wdata=(lw)?`W_RDATA:
															(jal)?`W_ADDER:
															`W_ANS;
	//assign s_W_Wdata[1]=(jal)?1'b1:1'b0;
	//assign s_W_Wdata[0]=(lw)?1'b1:1'b0;
	
	//signal for choosing Wreg
	assign s_W_Wreg=(ori||lui||lw)?`RT:
														(jal)?`RA:
														`RD;
	//assign s_W_Wreg[1]=(jal)?1'b1:1'b0;
	//assign s_W_Wreg[0]=(ori||lui||lw)?1'b1:1'b0;

	//rt and rd
	assign W_rt=W_instruction[20:16];
	assign W_rd=W_instruction[15:11];

endmodule
