/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'CPU' in SOPC Builder design 'taller'
 * SOPC Builder design path: ../../taller.sopcinfo
 *
 * Generated: Thu May 02 22:12:14 CST 2019
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * BUTTON1 configuration
 *
 */

#define ALT_MODULE_CLASS_BUTTON1 altera_avalon_pio
#define BUTTON1_BASE 0x90b0
#define BUTTON1_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON1_CAPTURE 1
#define BUTTON1_DATA_WIDTH 1
#define BUTTON1_DO_TEST_BENCH_WIRING 0
#define BUTTON1_DRIVEN_SIM_VALUE 0
#define BUTTON1_EDGE_TYPE "FALLING"
#define BUTTON1_FREQ 50000000
#define BUTTON1_HAS_IN 1
#define BUTTON1_HAS_OUT 0
#define BUTTON1_HAS_TRI 0
#define BUTTON1_IRQ 1
#define BUTTON1_IRQ_INTERRUPT_CONTROLLER_ID 0
#define BUTTON1_IRQ_TYPE "EDGE"
#define BUTTON1_NAME "/dev/BUTTON1"
#define BUTTON1_RESET_VALUE 0
#define BUTTON1_SPAN 16
#define BUTTON1_TYPE "altera_avalon_pio"


/*
 * BUTTON2 configuration
 *
 */

#define ALT_MODULE_CLASS_BUTTON2 altera_avalon_pio
#define BUTTON2_BASE 0x90a0
#define BUTTON2_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON2_CAPTURE 1
#define BUTTON2_DATA_WIDTH 1
#define BUTTON2_DO_TEST_BENCH_WIRING 0
#define BUTTON2_DRIVEN_SIM_VALUE 0
#define BUTTON2_EDGE_TYPE "FALLING"
#define BUTTON2_FREQ 50000000
#define BUTTON2_HAS_IN 1
#define BUTTON2_HAS_OUT 0
#define BUTTON2_HAS_TRI 0
#define BUTTON2_IRQ 3
#define BUTTON2_IRQ_INTERRUPT_CONTROLLER_ID 0
#define BUTTON2_IRQ_TYPE "EDGE"
#define BUTTON2_NAME "/dev/BUTTON2"
#define BUTTON2_RESET_VALUE 0
#define BUTTON2_SPAN 16
#define BUTTON2_TYPE "altera_avalon_pio"


/*
 * BUTTON3 configuration
 *
 */

#define ALT_MODULE_CLASS_BUTTON3 altera_avalon_pio
#define BUTTON3_BASE 0x9090
#define BUTTON3_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON3_CAPTURE 1
#define BUTTON3_DATA_WIDTH 1
#define BUTTON3_DO_TEST_BENCH_WIRING 0
#define BUTTON3_DRIVEN_SIM_VALUE 0
#define BUTTON3_EDGE_TYPE "FALLING"
#define BUTTON3_FREQ 50000000
#define BUTTON3_HAS_IN 1
#define BUTTON3_HAS_OUT 0
#define BUTTON3_HAS_TRI 0
#define BUTTON3_IRQ 4
#define BUTTON3_IRQ_INTERRUPT_CONTROLLER_ID 0
#define BUTTON3_IRQ_TYPE "EDGE"
#define BUTTON3_NAME "/dev/BUTTON3"
#define BUTTON3_RESET_VALUE 0
#define BUTTON3_SPAN 16
#define BUTTON3_TYPE "altera_avalon_pio"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00008820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x10
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00004020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x10
#define ALT_CPU_NAME "CPU"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00004000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00008820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x10
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00004020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x10
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00004000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_AVALON_UART
#define __ALTERA_NIOS2_GEN2


/*
 * JTAG configuration
 *
 */

#define ALT_MODULE_CLASS_JTAG altera_avalon_jtag_uart
#define JTAG_BASE 0x90d0
#define JTAG_IRQ 0
#define JTAG_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_NAME "/dev/JTAG"
#define JTAG_READ_DEPTH 64
#define JTAG_READ_THRESHOLD 8
#define JTAG_SPAN 8
#define JTAG_TYPE "altera_avalon_jtag_uart"
#define JTAG_WRITE_DEPTH 64
#define JTAG_WRITE_THRESHOLD 8


/*
 * LEDS configuration
 *
 */

#define ALT_MODULE_CLASS_LEDS altera_avalon_pio
#define LEDS_BASE 0x90c0
#define LEDS_BIT_CLEARING_EDGE_REGISTER 0
#define LEDS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDS_CAPTURE 0
#define LEDS_DATA_WIDTH 8
#define LEDS_DO_TEST_BENCH_WIRING 0
#define LEDS_DRIVEN_SIM_VALUE 0
#define LEDS_EDGE_TYPE "NONE"
#define LEDS_FREQ 50000000
#define LEDS_HAS_IN 0
#define LEDS_HAS_OUT 1
#define LEDS_HAS_TRI 0
#define LEDS_IRQ -1
#define LEDS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDS_IRQ_TYPE "NONE"
#define LEDS_NAME "/dev/LEDS"
#define LEDS_RESET_VALUE 0
#define LEDS_SPAN 16
#define LEDS_TYPE "altera_avalon_pio"


/*
 * RAM configuration
 *
 */

#define ALT_MODULE_CLASS_RAM altera_avalon_onchip_memory2
#define RAM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define RAM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define RAM_BASE 0x4000
#define RAM_CONTENTS_INFO ""
#define RAM_DUAL_PORT 0
#define RAM_GUI_RAM_BLOCK_TYPE "AUTO"
#define RAM_INIT_CONTENTS_FILE "taller_RAM"
#define RAM_INIT_MEM_CONTENT 1
#define RAM_INSTANCE_ID "NONE"
#define RAM_IRQ -1
#define RAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RAM_NAME "/dev/RAM"
#define RAM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define RAM_RAM_BLOCK_TYPE "AUTO"
#define RAM_READ_DURING_WRITE_MODE "DONT_CARE"
#define RAM_SINGLE_CLOCK_OP 0
#define RAM_SIZE_MULTIPLE 1
#define RAM_SIZE_VALUE 16384
#define RAM_SPAN 16384
#define RAM_TYPE "altera_avalon_onchip_memory2"
#define RAM_WRITABLE 1


/*
 * SEG1 configuration
 *
 */

#define ALT_MODULE_CLASS_SEG1 altera_avalon_pio
#define SEG1_BASE 0x9040
#define SEG1_BIT_CLEARING_EDGE_REGISTER 0
#define SEG1_BIT_MODIFYING_OUTPUT_REGISTER 1
#define SEG1_CAPTURE 0
#define SEG1_DATA_WIDTH 7
#define SEG1_DO_TEST_BENCH_WIRING 0
#define SEG1_DRIVEN_SIM_VALUE 0
#define SEG1_EDGE_TYPE "NONE"
#define SEG1_FREQ 50000000
#define SEG1_HAS_IN 0
#define SEG1_HAS_OUT 1
#define SEG1_HAS_TRI 0
#define SEG1_IRQ -1
#define SEG1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG1_IRQ_TYPE "NONE"
#define SEG1_NAME "/dev/SEG1"
#define SEG1_RESET_VALUE 0
#define SEG1_SPAN 32
#define SEG1_TYPE "altera_avalon_pio"


/*
 * SEG2 configuration
 *
 */

#define ALT_MODULE_CLASS_SEG2 altera_avalon_pio
#define SEG2_BASE 0x9080
#define SEG2_BIT_CLEARING_EDGE_REGISTER 0
#define SEG2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG2_CAPTURE 0
#define SEG2_DATA_WIDTH 7
#define SEG2_DO_TEST_BENCH_WIRING 0
#define SEG2_DRIVEN_SIM_VALUE 0
#define SEG2_EDGE_TYPE "NONE"
#define SEG2_FREQ 50000000
#define SEG2_HAS_IN 0
#define SEG2_HAS_OUT 1
#define SEG2_HAS_TRI 0
#define SEG2_IRQ -1
#define SEG2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG2_IRQ_TYPE "NONE"
#define SEG2_NAME "/dev/SEG2"
#define SEG2_RESET_VALUE 0
#define SEG2_SPAN 16
#define SEG2_TYPE "altera_avalon_pio"


/*
 * SEG3 configuration
 *
 */

#define ALT_MODULE_CLASS_SEG3 altera_avalon_pio
#define SEG3_BASE 0x9070
#define SEG3_BIT_CLEARING_EDGE_REGISTER 0
#define SEG3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG3_CAPTURE 0
#define SEG3_DATA_WIDTH 7
#define SEG3_DO_TEST_BENCH_WIRING 0
#define SEG3_DRIVEN_SIM_VALUE 0
#define SEG3_EDGE_TYPE "NONE"
#define SEG3_FREQ 50000000
#define SEG3_HAS_IN 0
#define SEG3_HAS_OUT 1
#define SEG3_HAS_TRI 0
#define SEG3_IRQ -1
#define SEG3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG3_IRQ_TYPE "NONE"
#define SEG3_NAME "/dev/SEG3"
#define SEG3_RESET_VALUE 0
#define SEG3_SPAN 16
#define SEG3_TYPE "altera_avalon_pio"


/*
 * SEG4 configuration
 *
 */

#define ALT_MODULE_CLASS_SEG4 altera_avalon_pio
#define SEG4_BASE 0x9060
#define SEG4_BIT_CLEARING_EDGE_REGISTER 0
#define SEG4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG4_CAPTURE 0
#define SEG4_DATA_WIDTH 7
#define SEG4_DO_TEST_BENCH_WIRING 0
#define SEG4_DRIVEN_SIM_VALUE 0
#define SEG4_EDGE_TYPE "NONE"
#define SEG4_FREQ 50000000
#define SEG4_HAS_IN 0
#define SEG4_HAS_OUT 1
#define SEG4_HAS_TRI 0
#define SEG4_IRQ -1
#define SEG4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG4_IRQ_TYPE "NONE"
#define SEG4_NAME "/dev/SEG4"
#define SEG4_RESET_VALUE 0
#define SEG4_SPAN 16
#define SEG4_TYPE "altera_avalon_pio"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/JTAG"
#define ALT_STDERR_BASE 0x90d0
#define ALT_STDERR_DEV JTAG
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/UART"
#define ALT_STDIN_BASE 0x9000
#define ALT_STDIN_DEV UART
#define ALT_STDIN_IS_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_uart"
#define ALT_STDOUT "/dev/JTAG"
#define ALT_STDOUT_BASE 0x90d0
#define ALT_STDOUT_DEV JTAG
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "taller"


/*
 * TIMER configuration
 *
 */

#define ALT_MODULE_CLASS_TIMER altera_avalon_timer
#define TIMER_ALWAYS_RUN 0
#define TIMER_BASE 0x9020
#define TIMER_COUNTER_SIZE 32
#define TIMER_FIXED_PERIOD 1
#define TIMER_FREQ 50000000
#define TIMER_IRQ 2
#define TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_LOAD_VALUE 49999999
#define TIMER_MULT 1.0
#define TIMER_NAME "/dev/TIMER"
#define TIMER_PERIOD 1
#define TIMER_PERIOD_UNITS "s"
#define TIMER_RESET_OUTPUT 0
#define TIMER_SNAPSHOT 0
#define TIMER_SPAN 32
#define TIMER_TICKS_PER_SEC 1
#define TIMER_TIMEOUT_PULSE_OUTPUT 1
#define TIMER_TYPE "altera_avalon_timer"


/*
 * UART configuration
 *
 */

#define ALT_MODULE_CLASS_UART altera_avalon_uart
#define UART_BASE 0x9000
#define UART_BAUD 115200
#define UART_DATA_BITS 8
#define UART_FIXED_BAUD 1
#define UART_FREQ 50000000
#define UART_IRQ 5
#define UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define UART_NAME "/dev/UART"
#define UART_PARITY 'N'
#define UART_SIM_CHAR_STREAM ""
#define UART_SIM_TRUE_BAUD 0
#define UART_SPAN 32
#define UART_STOP_BITS 1
#define UART_SYNC_REG_DEPTH 2
#define UART_TYPE "altera_avalon_uart"
#define UART_USE_CTS_RTS 0
#define UART_USE_EOP_REGISTER 0


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 4
#define ALT_SYS_CLK TIMER
#define ALT_TIMESTAMP_CLK TIMER

#endif /* __SYSTEM_H_ */
