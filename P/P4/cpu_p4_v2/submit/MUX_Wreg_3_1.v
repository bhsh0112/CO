`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:19:28 11/03/2023 
// Design Name: 
// Module Name:    MUX_Wreg_3_1 
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
module MUX_Wreg_3_1(
    input [4:0] rt,
    input [4:0] rd,
    input [1:0] s_Wreg,
    output [4:0] Wreg
    );
	assign Wreg=(s_Wreg==2'b00)?rt
										:(s_Wreg==2'b01)?rd
										:(s_Wreg==2'b10)?5'b11111
										:rt;

endmodule
