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


`define ADD_FUN 6'b100000 //funct
`define SUB_FUN 6'b100010
module W_controller(
    input [31:0] W_instruction,
	 output [4:0] W_rt,
	 output [4:0] W_rd,
    output [1:0] s_W_Wdata,
    output [1:0] s_W_Wreg,
    output W_GRF_WE,
	 output W_is_jal,
	 output W_is_LW
    );
	//
	wire [5:0] special;
	wire [5:0] funct;
	assign special=W_instruction[31:26];
	assign funct=W_instruction[5:0];
	
	//
	wire add;
	wire sub;
	wire ori;
	wire lui;
	wire lw;
	wire jal;
	wire gtb;
	assign add=(special==`R&&funct==`ADD_FUN)?1'b1:1'b0;
	assign sub=(special==`R&&funct==`SUB_FUN)?1'b1:1'b0;
	assign lui=(special==`LUI)?1'b1:1'b0;
	assign ori=(special==`ORI)?1'b1:1'b0;
	assign lw=(special==`LW)?1'b1:1'b0;
	assign jal=(special==`JAL)?1'b1:1'b0;
	
	
	assign W_is_jal=jal;
	assign W_is_LW=lw;
	
	//
	assign W_GRF_WE=(add||sub||ori||lw||jal||lui)?1'b1:1'b0;
	assign s_W_Wdata[1]=(jal)?1'b1:1'b0;
	assign s_W_Wdata[0]=(lw)?1'b1:1'b0;
	assign s_W_Wreg[1]=(jal)?1'b1:1'b0;
	assign s_W_Wreg[0]=(ori||lui||lw)?1'b1:1'b0;


	assign W_rt=W_instruction[20:16];
	assign W_rd=W_instruction[15:11];

endmodule
