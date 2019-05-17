	component taller is
		port (
			button1_export : in  std_logic                    := 'X'; -- export
			button2_export : in  std_logic                    := 'X'; -- export
			button3_export : in  std_logic                    := 'X'; -- export
			clk_clk        : in  std_logic                    := 'X'; -- clk
			leds_export    : out std_logic_vector(7 downto 0);        -- export
			reset_reset_n  : in  std_logic                    := 'X'; -- reset_n
			seg1_export    : out std_logic_vector(6 downto 0);        -- export
			seg2_export    : out std_logic_vector(6 downto 0);        -- export
			seg3_export    : out std_logic_vector(6 downto 0);        -- export
			seg4_export    : out std_logic_vector(6 downto 0);        -- export
			uart_rxd       : in  std_logic                    := 'X'; -- rxd
			uart_txd       : out std_logic                            -- txd
		);
	end component taller;

	u0 : component taller
		port map (
			button1_export => CONNECTED_TO_button1_export, -- button1.export
			button2_export => CONNECTED_TO_button2_export, -- button2.export
			button3_export => CONNECTED_TO_button3_export, -- button3.export
			clk_clk        => CONNECTED_TO_clk_clk,        --     clk.clk
			leds_export    => CONNECTED_TO_leds_export,    --    leds.export
			reset_reset_n  => CONNECTED_TO_reset_reset_n,  --   reset.reset_n
			seg1_export    => CONNECTED_TO_seg1_export,    --    seg1.export
			seg2_export    => CONNECTED_TO_seg2_export,    --    seg2.export
			seg3_export    => CONNECTED_TO_seg3_export,    --    seg3.export
			seg4_export    => CONNECTED_TO_seg4_export,    --    seg4.export
			uart_rxd       => CONNECTED_TO_uart_rxd,       --    uart.rxd
			uart_txd       => CONNECTED_TO_uart_txd        --        .txd
		);

