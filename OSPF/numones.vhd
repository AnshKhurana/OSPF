----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:23:24 05/03/2019 
-- Design Name: 
-- Module Name:    numones - Behavioral 
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

entity numones is
    Port ( in1 : in  STD_LOGIC_VECTOR (7 downto 0);
           out1 : out  STD_LOGIC_VECTOR (3 downto 0));
end numones;

architecture Behavioral of numones is

begin
process (in1)
begin
case in1 is
when "00000000" =>
out1 <= "0000";
when "00000001" =>
out1 <= "0001";
when "00000010" =>
out1 <= "0001";
when "00000011" =>
out1 <= "0010";
when "00000100" =>
out1 <= "0001";
when "00000101" =>
out1 <= "0010";
when "00000110" =>
out1 <= "0010";
when "00000111" =>
out1 <= "0011";
when "00001000" =>
out1 <= "0001";
when "00001001" =>
out1 <= "0010";
when "00001010" =>
out1 <= "0010";
when "00001011" =>
out1 <= "0011";
when "00001100" =>
out1 <= "0010";
when "00001101" =>
out1 <= "0011";
when "00001110" =>
out1 <= "0011";
when "00001111" =>
out1 <= "0100";
when "00010000" =>
out1 <= "0001";
when "00010001" =>
out1 <= "0010";
when "00010010" =>
out1 <= "0010";
when "00010011" =>
out1 <= "0011";
when "00010100" =>
out1 <= "0010";
when "00010101" =>
out1 <= "0011";
when "00010110" =>
out1 <= "0011";
when "00010111" =>
out1 <= "0100";
when "00011000" =>
out1 <= "0010";
when "00011001" =>
out1 <= "0011";
when "00011010" =>
out1 <= "0011";
when "00011011" =>
out1 <= "0100";
when "00011100" =>
out1 <= "0011";
when "00011101" =>
out1 <= "0100";
when "00011110" =>
out1 <= "0100";
when "00011111" =>
out1 <= "0101";
when "00100000" =>
out1 <= "0001";
when "00100001" =>
out1 <= "0010";
when "00100010" =>
out1 <= "0010";
when "00100011" =>
out1 <= "0011";
when "00100100" =>
out1 <= "0010";
when "00100101" =>
out1 <= "0011";
when "00100110" =>
out1 <= "0011";
when "00100111" =>
out1 <= "0100";
when "00101000" =>
out1 <= "0010";
when "00101001" =>
out1 <= "0011";
when "00101010" =>
out1 <= "0011";
when "00101011" =>
out1 <= "0100";
when "00101100" =>
out1 <= "0011";
when "00101101" =>
out1 <= "0100";
when "00101110" =>
out1 <= "0100";
when "00101111" =>
out1 <= "0101";
when "00110000" =>
out1 <= "0010";
when "00110001" =>
out1 <= "0011";
when "00110010" =>
out1 <= "0011";
when "00110011" =>
out1 <= "0100";
when "00110100" =>
out1 <= "0011";
when "00110101" =>
out1 <= "0100";
when "00110110" =>
out1 <= "0100";
when "00110111" =>
out1 <= "0101";
when "00111000" =>
out1 <= "0011";
when "00111001" =>
out1 <= "0100";
when "00111010" =>
out1 <= "0100";
when "00111011" =>
out1 <= "0101";
when "00111100" =>
out1 <= "0100";
when "00111101" =>
out1 <= "0101";
when "00111110" =>
out1 <= "0101";
when "00111111" =>
out1 <= "0110";
when "01000000" =>
out1 <= "0001";
when "01000001" =>
out1 <= "0010";
when "01000010" =>
out1 <= "0010";
when "01000011" =>
out1 <= "0011";
when "01000100" =>
out1 <= "0010";
when "01000101" =>
out1 <= "0011";
when "01000110" =>
out1 <= "0011";
when "01000111" =>
out1 <= "0100";
when "01001000" =>
out1 <= "0010";
when "01001001" =>
out1 <= "0011";
when "01001010" =>
out1 <= "0011";
when "01001011" =>
out1 <= "0100";
when "01001100" =>
out1 <= "0011";
when "01001101" =>
out1 <= "0100";
when "01001110" =>
out1 <= "0100";
when "01001111" =>
out1 <= "0101";
when "01010000" =>
out1 <= "0010";
when "01010001" =>
out1 <= "0011";
when "01010010" =>
out1 <= "0011";
when "01010011" =>
out1 <= "0100";
when "01010100" =>
out1 <= "0011";
when "01010101" =>
out1 <= "0100";
when "01010110" =>
out1 <= "0100";
when "01010111" =>
out1 <= "0101";
when "01011000" =>
out1 <= "0011";
when "01011001" =>
out1 <= "0100";
when "01011010" =>
out1 <= "0100";
when "01011011" =>
out1 <= "0101";
when "01011100" =>
out1 <= "0100";
when "01011101" =>
out1 <= "0101";
when "01011110" =>
out1 <= "0101";
when "01011111" =>
out1 <= "0110";
when "01100000" =>
out1 <= "0010";
when "01100001" =>
out1 <= "0011";
when "01100010" =>
out1 <= "0011";
when "01100011" =>
out1 <= "0100";
when "01100100" =>
out1 <= "0011";
when "01100101" =>
out1 <= "0100";
when "01100110" =>
out1 <= "0100";
when "01100111" =>
out1 <= "0101";
when "01101000" =>
out1 <= "0011";
when "01101001" =>
out1 <= "0100";
when "01101010" =>
out1 <= "0100";
when "01101011" =>
out1 <= "0101";
when "01101100" =>
out1 <= "0100";
when "01101101" =>
out1 <= "0101";
when "01101110" =>
out1 <= "0101";
when "01101111" =>
out1 <= "0110";
when "01110000" =>
out1 <= "0011";
when "01110001" =>
out1 <= "0100";
when "01110010" =>
out1 <= "0100";
when "01110011" =>
out1 <= "0101";
when "01110100" =>
out1 <= "0100";
when "01110101" =>
out1 <= "0101";
when "01110110" =>
out1 <= "0101";
when "01110111" =>
out1 <= "0110";
when "01111000" =>
out1 <= "0100";
when "01111001" =>
out1 <= "0101";
when "01111010" =>
out1 <= "0101";
when "01111011" =>
out1 <= "0110";
when "01111100" =>
out1 <= "0101";
when "01111101" =>
out1 <= "0110";
when "01111110" =>
out1 <= "0110";
when "01111111" =>
out1 <= "0111";
when "10000000" =>
out1 <= "0001";
when "10000001" =>
out1 <= "0010";
when "10000010" =>
out1 <= "0010";
when "10000011" =>
out1 <= "0011";
when "10000100" =>
out1 <= "0010";
when "10000101" =>
out1 <= "0011";
when "10000110" =>
out1 <= "0011";
when "10000111" =>
out1 <= "0100";
when "10001000" =>
out1 <= "0010";
when "10001001" =>
out1 <= "0011";
when "10001010" =>
out1 <= "0011";
when "10001011" =>
out1 <= "0100";
when "10001100" =>
out1 <= "0011";
when "10001101" =>
out1 <= "0100";
when "10001110" =>
out1 <= "0100";
when "10001111" =>
out1 <= "0101";
when "10010000" =>
out1 <= "0010";
when "10010001" =>
out1 <= "0011";
when "10010010" =>
out1 <= "0011";
when "10010011" =>
out1 <= "0100";
when "10010100" =>
out1 <= "0011";
when "10010101" =>
out1 <= "0100";
when "10010110" =>
out1 <= "0100";
when "10010111" =>
out1 <= "0101";
when "10011000" =>
out1 <= "0011";
when "10011001" =>
out1 <= "0100";
when "10011010" =>
out1 <= "0100";
when "10011011" =>
out1 <= "0101";
when "10011100" =>
out1 <= "0100";
when "10011101" =>
out1 <= "0101";
when "10011110" =>
out1 <= "0101";
when "10011111" =>
out1 <= "0110";
when "10100000" =>
out1 <= "0010";
when "10100001" =>
out1 <= "0011";
when "10100010" =>
out1 <= "0011";
when "10100011" =>
out1 <= "0100";
when "10100100" =>
out1 <= "0011";
when "10100101" =>
out1 <= "0100";
when "10100110" =>
out1 <= "0100";
when "10100111" =>
out1 <= "0101";
when "10101000" =>
out1 <= "0011";
when "10101001" =>
out1 <= "0100";
when "10101010" =>
out1 <= "0100";
when "10101011" =>
out1 <= "0101";
when "10101100" =>
out1 <= "0100";
when "10101101" =>
out1 <= "0101";
when "10101110" =>
out1 <= "0101";
when "10101111" =>
out1 <= "0110";
when "10110000" =>
out1 <= "0011";
when "10110001" =>
out1 <= "0100";
when "10110010" =>
out1 <= "0100";
when "10110011" =>
out1 <= "0101";
when "10110100" =>
out1 <= "0100";
when "10110101" =>
out1 <= "0101";
when "10110110" =>
out1 <= "0101";
when "10110111" =>
out1 <= "0110";
when "10111000" =>
out1 <= "0100";
when "10111001" =>
out1 <= "0101";
when "10111010" =>
out1 <= "0101";
when "10111011" =>
out1 <= "0110";
when "10111100" =>
out1 <= "0101";
when "10111101" =>
out1 <= "0110";
when "10111110" =>
out1 <= "0110";
when "10111111" =>
out1 <= "0111";
when "11000000" =>
out1 <= "0010";
when "11000001" =>
out1 <= "0011";
when "11000010" =>
out1 <= "0011";
when "11000011" =>
out1 <= "0100";
when "11000100" =>
out1 <= "0011";
when "11000101" =>
out1 <= "0100";
when "11000110" =>
out1 <= "0100";
when "11000111" =>
out1 <= "0101";
when "11001000" =>
out1 <= "0011";
when "11001001" =>
out1 <= "0100";
when "11001010" =>
out1 <= "0100";
when "11001011" =>
out1 <= "0101";
when "11001100" =>
out1 <= "0100";
when "11001101" =>
out1 <= "0101";
when "11001110" =>
out1 <= "0101";
when "11001111" =>
out1 <= "0110";
when "11010000" =>
out1 <= "0011";
when "11010001" =>
out1 <= "0100";
when "11010010" =>
out1 <= "0100";
when "11010011" =>
out1 <= "0101";
when "11010100" =>
out1 <= "0100";
when "11010101" =>
out1 <= "0101";
when "11010110" =>
out1 <= "0101";
when "11010111" =>
out1 <= "0110";
when "11011000" =>
out1 <= "0100";
when "11011001" =>
out1 <= "0101";
when "11011010" =>
out1 <= "0101";
when "11011011" =>
out1 <= "0110";
when "11011100" =>
out1 <= "0101";
when "11011101" =>
out1 <= "0110";
when "11011110" =>
out1 <= "0110";
when "11011111" =>
out1 <= "0111";
when "11100000" =>
out1 <= "0011";
when "11100001" =>
out1 <= "0100";
when "11100010" =>
out1 <= "0100";
when "11100011" =>
out1 <= "0101";
when "11100100" =>
out1 <= "0100";
when "11100101" =>
out1 <= "0101";
when "11100110" =>
out1 <= "0101";
when "11100111" =>
out1 <= "0110";
when "11101000" =>
out1 <= "0100";
when "11101001" =>
out1 <= "0101";
when "11101010" =>
out1 <= "0101";
when "11101011" =>
out1 <= "0110";
when "11101100" =>
out1 <= "0101";
when "11101101" =>
out1 <= "0110";
when "11101110" =>
out1 <= "0110";
when "11101111" =>
out1 <= "0111";
when "11110000" =>
out1 <= "0100";
when "11110001" =>
out1 <= "0101";
when "11110010" =>
out1 <= "0101";
when "11110011" =>
out1 <= "0110";
when "11110100" =>
out1 <= "0101";
when "11110101" =>
out1 <= "0110";
when "11110110" =>
out1 <= "0110";
when "11110111" =>
out1 <= "0111";
when "11111000" =>
out1 <= "0101";
when "11111001" =>
out1 <= "0110";
when "11111010" =>
out1 <= "0110";
when "11111011" =>
out1 <= "0111";
when "11111100" =>
out1 <= "0110";
when "11111101" =>
out1 <= "0111";
when "11111110" =>
out1 <= "0111";
when others =>
out1 <= "1000";
end case;
end process;
end Behavioral;
