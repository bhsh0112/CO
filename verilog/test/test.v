`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:29:32 09/25/2023 
// Design Name: 
// Module Name:    test 
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
module test(
    input ina,
	 input inb,
	 input inc,
	 input ind,
	 input ine,
	 input inf,
	 input ing,
    output [3:0] x
    );
	assign x[0] =((~ina)&(~inb))|((~ina)&(~inf))|((~ind)&(~ine))|(ina&(~inc));
	assign x[1]=((inc)&(~inf)&(ing))|(ina&(~inb))|(ina&(~ind));
	assign x[2]=((~ina)&(~inb)&ind)|(inb&(~inc)&ind)|(ina&(~inf));
	assign x[3]=((~ine)&(~inf))|((~ina)&inc)|(ina&inb&inf&ing);


endmodule
