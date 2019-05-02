--------------------------------------------------------------------------------
-- Company:       AC/DC
-- Engineer:      Saksham Goel
--
-- Create Date:   10:24:22 05/02/2019
-- Design Name:   
-- Module Name:   /home/ise/ISE/CS226_OSPF/OSPF/LSUM_tb.vhd
-- Project Name:  OSPF
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: LinkStateUpdateMachine
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
 
ENTITY LSUM_tb IS
END LSUM_tb;
 
ARCHITECTURE behavior OF LSUM_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT LinkStateUpdateMachine
    PORT(
         clk : IN  std_logic;
         empty : IN  std_logic;
         q_din : IN  std_logic_vector(7 downto 0);
         q_read : OUT  std_logic;
         db_read : OUT  std_logic;
         db_addr : OUT  std_logic_vector(11 downto 0);
         db_din : IN  std_logic_vector(7 downto 0);
         db_write : OUT  std_logic;
         db_dout : OUT  std_logic_vector(7 downto 0);
         fl_val : OUT  std_logic;
         fl_out : OUT  std_logic_vector(7 downto 0);
         fl_port : OUT  std_logic_vector(7 downto 0);
         dijkstra_on : OUT  std_logic
        );
    END COMPONENT;
	 COMPONENT FIFOLSU
	  PORT (
		 clk : IN STD_LOGIC;
		 rst : IN STD_LOGIC;
		 din : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
		 wr_en : IN STD_LOGIC;
		 rd_en : IN STD_LOGIC;
		 dout : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
		 full : OUT STD_LOGIC;
		 empty : OUT STD_LOGIC;
		 data_count : OUT STD_LOGIC_VECTOR(11 DOWNTO 0)
	  );
	END COMPONENT;
	COMPONENT RAMDB
	  PORT (
		 clka : IN STD_LOGIC;
		 ena : IN STD_LOGIC;
		 wea : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
		 addra : IN STD_LOGIC_VECTOR(11 DOWNTO 0);
		 dina : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
		 douta : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)
	  );
	END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal empty : std_logic := '0';
   signal q_din : std_logic_vector(7 downto 0) := (others => '0');
   signal db_din : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal q_read : std_logic;
   signal db_read : std_logic;
   signal db_addr : std_logic_vector(11 downto 0);
   signal db_write : std_logic;
	signal wea : std_logic_vector(0 downto 0);
   signal db_dout : std_logic_vector(7 downto 0);
   signal fl_val : std_logic;
   signal fl_out : std_logic_vector(7 downto 0);
   signal fl_port : std_logic_vector(7 downto 0);
   signal dijkstra_on : std_logic;
	signal wr_en : std_logic;
	signal din : std_logic_vector(7 downto 0);
	signal data_count : std_logic_vector(11 downto 0);
	signal full : std_logic;
   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
wea(0) <= db_write; 
	-- Instantiate the Unit Under Test (UUT)
   uut: LinkStateUpdateMachine PORT MAP (
          clk => clk,
          empty => empty,
          q_din => q_din,
          q_read => q_read,
          db_read => db_read,
          db_addr => db_addr,
          db_din => db_din,
          db_write => db_write,
          db_dout => db_dout,
          fl_val => fl_val,
          fl_out => fl_out,
          fl_port => fl_port,
          dijkstra_on => dijkstra_on
        );
	FIFO : FIFOLSU
	  PORT MAP (
		 clk => clk,
		 rst => '0',
		 din => din,
		 wr_en => wr_en,
		 rd_en => q_read,
		 dout => q_din,
		 full => full,
		 empty => empty,
		 data_count => data_count
	  );
	
	RAM : RAMDB
	  PORT MAP (
		 clka => clk,
		 ena => '1',
		 wea => wea,
		 addra => db_addr,
		 dina => db_dout,
		 douta => db_din
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
      wr_en <= '1'; 
      din <= "00000100";
      wait for clk_period;
     wr_en <= '1'; 
     din <= "00111011";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "11111100";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00100100";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000010";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000010";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000010";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000010";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "11111111";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "11111111";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "11111111";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "11110000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000011";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
	  wr_en <= '0';
     wait for clk_period*10;



     --SAME AD, Diff SeqNo.
      wr_en <= '1'; 
      din <= "00000110";
      wait for clk_period;
     wr_en <= '1'; 
     din <= "11011110";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "11110001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000010";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00100100";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000010";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000010";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000010";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000010";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "11111111";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "11111111";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "11111111";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000011";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '0';
     wait for clk_period*10;

     --Diff AD
      wr_en <= '1'; 
      din <= "00000100";
     wr_en <= '1'; 
     din <= "10011101";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00010110";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000010";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000010";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000010";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000010";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000010";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000010";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000010";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000010";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000101";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00110000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000010";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "11111111";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "11111111";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "11110000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000011";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000001";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "11111111";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "11111111";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "11111111";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "11111111";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000011";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '1'; 
     din <= "00000000";
     wait for clk_period;
     wr_en <= '0';
      wait;
   end process;

END;