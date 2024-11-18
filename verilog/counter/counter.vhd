----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:50:09 09/05/2023 
-- Design Name: 
-- Module Name:    counter - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity counter is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           slt : in  STD_LOGIC;
           en : in  STD_LOGIC;
           output0 : out  STD_LOGIC_VECTOR (63 downto 0);
           output1 : out  STD_LOGIC_VECTOR (63 downto 0));
end counter;

architecture Behavioral of counter is

begin


end Behavioral;

