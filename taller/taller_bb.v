
module taller (
	button1_export,
	button2_export,
	button3_export,
	clk_clk,
	leds_export,
	reset_reset_n,
	seg1_export,
	seg2_export,
	seg3_export,
	seg4_export,
	uart_rxd,
	uart_txd);	

	input		button1_export;
	input		button2_export;
	input		button3_export;
	input		clk_clk;
	output	[7:0]	leds_export;
	input		reset_reset_n;
	output	[6:0]	seg1_export;
	output	[6:0]	seg2_export;
	output	[6:0]	seg3_export;
	output	[6:0]	seg4_export;
	input		uart_rxd;
	output		uart_txd;
endmodule
