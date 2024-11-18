`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:16:10 10/31/2023 
// Design Name: 
// Module Name:    contrller_ALU 
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
`define F_ADD 3'b001  //force_add
`define F_SUB 3'b010
`define F_OR 3'b011
`define F_LUI 3'b100

`define ADD 3'b000  //op
`define SUB 3'b001
`define OR 3'b010
`define LUI 3'b011

`define ADD_FUN 6'b100000 //funct
`define SUB_FUN 6'b100010
`define JR 6'b001000
`define NOP 6'b000000

module contrller_ALU(
    input [5:0] funct,
    input [2:0] ALU_op,
    output reg [2:0] op,
    output reg is_jr,
	 output is_nop
    );
	always @(*) begin
		case(ALU_op)
			`F_ADD:op=`ADD;    //forced by ALU_op
			`F_SUB:op=`SUB;
			`F_OR:op=`OR;
			`F_LUI:op=`LUI;
			3'b000:begin      //normal situation
										case(funct)
											`ADD_FUN:op=`ADD;
											`SUB_FUN:op=`SUB;
											default:op=`SUB;
										endcase
									end
			default:op=`ADD;
		endcase
		if(funct==`JR) is_jr=1'b1;
		else is_jr=1'b0;
	end
	assign is_nop=(funct==`NOP)?1'b1:1'b0;
endmodule
