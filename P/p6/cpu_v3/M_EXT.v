`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:15:38 11/21/2023 
// Design Name: 
// Module Name:    M_EXT 
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
`define NONE 3'b000
`define U_BYTE 3'b001
`define S_BYTE 3'b010
`define U_HALFWORD 3'b011
`define S_HALFWORD 3'b100

`define BYTE_1 2'b00
`define BYTE_2 2'b01
`define BYTE_3 2'b10
`define BYTE_4 2'b11

`define HALF_1 1'b0
`define HALF_2 1'b1
module M_EXT(
    input [31:0] M_pre_Rdata,
    input [2:0] M_EXT_op,
    input [31:0] M_adress,
    output reg [31:0] M_Rdata
    );
	wire [7:0] Byte;
	wire [15:0] half_word;
	wire [1:0] low;
	
	assign low=M_adress[1:0];
	assign Byte=(low==`BYTE_1)?M_pre_Rdata[7:0]:
										(low==`BYTE_2)?M_pre_Rdata[15:8]:
										(low==`BYTE_3)?M_pre_Rdata[23:16]:
										(low==`BYTE_4)?M_pre_Rdata[31:24]:
										M_pre_Rdata[7:0];
	assign half_word=(low[1]==1'b0)?M_pre_Rdata[15:0]:
														(low[1]==1'b1)?M_pre_Rdata[31:16]:
														M_pre_Rdata[15:0];
	
	always @(*)begin
		case(M_EXT_op)
			`NONE:M_Rdata=M_pre_Rdata;
			`U_BYTE:M_Rdata={24'b0,Byte};
			`S_BYTE:M_Rdata={{24{Byte[7]}},Byte};
			`U_HALFWORD:M_Rdata={16'b0,half_word};
			`S_HALFWORD:M_Rdata={{16{half_word[15]}},half_word};
		endcase
	end

endmodule
