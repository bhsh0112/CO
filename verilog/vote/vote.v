`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:07:07 09/25/2023 
// Design Name: 
// Module Name:    vote 
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
module vote(
    input A,
    input B,
    input C,
    output res
    );
	 always@ * 
	 begin
			assign res=A&(B|C);
	 end

	
endmodule
