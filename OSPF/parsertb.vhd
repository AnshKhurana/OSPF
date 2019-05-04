--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:36:52 05/04/2019
-- Design Name:   
-- Module Name:   /home/aman/Desktop/IITB/CS226/project_ospf/CS226_OSPF/OSPF/parsertb.vhd
-- Project Name:  OSPF
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Parser
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY parsertb IS
END parsertb;
 
ARCHITECTURE behavior OF parsertb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Parser
    PORT(
         in1 : IN  std_logic_vector(7 downto 0);
         validity : IN  std_logic;
         clk : IN  std_logic;
         out1 : OUT  std_logic_vector(7 downto 0);
         hello_out : OUT  std_logic;
         ls_out : OUT  std_logic;
         telling_lsu : OUT  std_logic;
         telling_dd : OUT  std_logic;
         telling_plen : OUT  std_logic;
         telling_rid : OUT  std_logic;
         telling_lsr : OUT  std_logic;
         telling_neighbour : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal in1 : std_logic_vector(7 downto 0) := (others => '0');
   signal validity : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal out1 : std_logic_vector(7 downto 0);
   signal hello_out : std_logic;
   signal ls_out : std_logic;
   signal telling_lsu : std_logic;
   signal telling_dd : std_logic;
   signal telling_plen : std_logic;
   signal telling_rid : std_logic;
   signal telling_lsr : std_logic;
   signal telling_neighbour : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Parser PORT MAP (
          in1 => in1,
          validity => validity,
          clk => clk,
          out1 => out1,
          hello_out => hello_out,
          ls_out => ls_out,
          telling_lsu => telling_lsu,
          telling_dd => telling_dd,
          telling_plen => telling_plen,
          telling_rid => telling_rid,
          telling_lsr => telling_lsr,
          telling_neighbour => telling_neighbour
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
      validity <= '1';
		in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000010";
wait for clk_period;
in1 <= "00000001";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00111000";
wait for clk_period;
in1 <= "00000010";
wait for clk_period;
in1 <= "00000010";
wait for clk_period;
in1 <= "00000010";
wait for clk_period;
in1 <= "00000010";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000011";
wait for clk_period;
in1 <= "11101000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000111";
wait for clk_period;
in1 <= "11010000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000000";
wait for clk_period;
in1 <= "00000001";
wait for clk_period;
in1 <= "00000001";
wait for clk_period;
in1 <= "00000001";
wait for clk_period;
in1 <= "00000001";
wait for clk_period;
in1 <= "00000101";
wait for clk_period;
in1 <= "00000101";
wait for clk_period;
in1 <= "00000101";
wait for clk_period;
in1 <= "00000101";
wait for clk_period;
in1 <= "00000100";
wait for clk_period;
in1 <= "00000100";
wait for clk_period;
in1 <= "00000100";
wait for clk_period;
in1 <= "00000100";
wait for clk_period;
validity <= '1';

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
