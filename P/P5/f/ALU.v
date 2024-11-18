`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:53:56 11/17/2022 
// Design Name: 
// Module Name:    ALU 
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
`define ADDU 5'b00000
`define SUBU 5'b00001
`define AND 5'b00010
`define OR 5'b00011
`define LUI 5'b00100
module E_ALU(
    input [4:0] ALUOp_E,
    input [31:0] SrcA_E,
    input [31:0] SrcB_E,
    output reg [31:0] ALUResult_E,
	 output new2_E
    );
	 assign new2_E = 0;
	 always@(*)begin
	 
	   case(ALUOp_E)
		    `ADDU: 
			        ALUResult_E = SrcA_E + SrcB_E;         //0 for +
			 `SUBU: 
			        ALUResult_E = SrcA_E - SrcB_E;         //1 for -
			 `AND: 
			        ALUResult_E = SrcA_E & SrcB_E;          //2 for &
			 `OR: 
			        ALUResult_E = SrcA_E | SrcB_E;          //3 for |
			 `LUI: 
			        ALUResult_E = {SrcB_E[15:0], 16'h0};  //4 for lui
					  
			 default: ALUResult_E=0;
			 
		endcase
	 end
endmodule