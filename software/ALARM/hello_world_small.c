/* 
 * "Small Hello World" example. 
 * 
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example 
 * designs. It requires a STDOUT  device in your system's hardware. 
 *
 * The purpose of this example is to demonstrate the smallest possible Hello 
 * World application, using the Nios II HAL library.  The memory footprint
 * of this hosted application is ~332 bytes by default using the standard 
 * reference design.  For a more fully featured Hello World application
 * example, see the example titled "Hello World".
 *
 * The memory footprint of this example has been reduced by making the
 * following changes to the normal "Hello World" example.
 * Check in the Nios II Software Developers Manual for a more complete 
 * description.
 * 
 * In the SW Application project (small_hello_world):
 *
 *  - In the C/C++ Build page
 * 
 *    - Set the Optimization Level to -Os
 * 
 * In System Library project (small_hello_world_syslib):
 *  - In the C/C++ Build page
 * 
 *    - Set the Optimization Level to -Os
 * 
 *    - Define the preprocessor option ALT_NO_INSTRUCTION_EMULATION 
 *      This removes software exception handling, which means that you cannot 
 *      run code compiled for Nios II cpu with a hardware multiplier on a core 
 *      without a the multiply unit. Check the Nios II Software Developers 
 *      Manual for more details.
 *
 *  - In the System Library page:
 *    - Set Periodic system timer and Timestamp timer to none
 *      This prevents the automatic inclusion of the timer driver.
 *
 *    - Set Max file descriptors to 4
 *      This reduces the size of the file handle pool.
 *
 *    - Check Main function does not exit
 *    - Uncheck Clean exit (flush buffers)
 *      This removes the unneeded call to exit when main returns, since it
 *      won't.
 *
 *    - Check Don't use C++
 *      This builds without the C++ support code.
 *
 *    - Check Small C library
 *      This uses a reduced functionality C library, which lacks  
 *      support for buffering, file IO, floating point and getch(), etc. 
 *      Check the Nios II Software Developers Manual for a complete list.
 *
 *    - Check Reduced device drivers
 *      This uses reduced functionality drivers if they're available. For the
 *      standard design this means you get polled UART and JTAG UART drivers,
 *      no support for the LCD driver and you lose the ability to program 
 *      CFI compliant flash devices.
 *
 *    - Check Access device drivers directly
 *      This bypasses the device file system to access device drivers directly.
 *      This eliminates the space required for the device file system services.
 *      It also provides a HAL version of libc services that access the drivers
 *      directly, further reducing space. Only a limited number of libc
 *      functions are available in this configuration.
 *
 *    - Use ALT versions of stdio routines:
 *
 *           Function                  Description
 *        ===============  =====================================
 *        alt_printf       Only supports %s, %x, and %c ( < 1 Kbyte)
 *        alt_putstr       Smaller overhead than puts with direct drivers
 *                         Note this function doesn't add a newline.
 *        alt_putchar      Smaller overhead than putchar with direct drivers
 *        alt_getchar      Smaller overhead than getchar with direct drivers
 *
 */

#include "sys/alt_stdio.h"
#include "sys/alt_irq.h"
#include "system.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

volatile int *leds = (int *)LEDS_BASE;
volatile int *seg1 =  (int *) SEG1_BASE;
volatile int *seg2 =  (int *) SEG2_BASE;
volatile int *seg3 =  (int *) SEG3_BASE;
volatile int *seg4 =  (int *) SEG4_BASE;
volatile int *buttonMenu =  (int *)  BUTTON1_BASE;
volatile int *buttonLeft =  (int *) BUTTON2_BASE;
volatile int *buttonUp = (int *)BUTTON3_BASE;
volatile char *timer_status_ptr = (char *)( TIMER_BASE);
volatile char *timer_control_ptr = (char *)(TIMER_BASE + 4);
volatile char *timer_mask_ptr = (char *)(TIMER_BASE + 8);
volatile char *timer_edge_cap_ptr = (char *)(TIMER_BASE + 12);


volatile char *btn_direction_ptr1 = (volatile char *)(BUTTON1_BASE + 4);
volatile char *btn_mask_ptr1 = (volatile char *)(BUTTON1_BASE + 8);
volatile char *btn_edge_ptr1 = (volatile char *)(BUTTON1_BASE + 12);
volatile char *btn_direction_ptr2 = (volatile char *)(BUTTON2_BASE + 4);
volatile char *btn_mask_ptr2 = (volatile char *)(BUTTON2_BASE + 8);
volatile char *btn_edge_ptr2 = (volatile char *)(BUTTON2_BASE + 12);
volatile char *btn_direction_ptr3 = (volatile char *)(BUTTON3_BASE + 4);
volatile char *btn_mask_ptr3 = (volatile char *)(BUTTON3_BASE + 8);
volatile char *btn_edge_ptr3 = (volatile char *)(BUTTON3_BASE + 12);

int cero = 0x40;
int uno = 0x79;
int dos = 0x24;
int tres = 0x30;
int cuatro = 0x19;
int cinco = 0x12;
int seis = 0x02;
int siete = 0x78;
int ocho = 0x00;
int nueve = 0x18;
int cont =  0;
volatile int edge_capture;
int *time;
int *alarmV;
int segs;
int segsAlarm;
int mins =0;
int hours=0;
int minsAlm=0;
int hoursAlm=0;
short mode=0;
short ind = 0;
int oldTime=0;

void printLeds(int * data){
	int * dataPrint=malloc((sizeof(int))*4);
	int i, j;
	for (i=0; i<4; i++){
		j=*(data+i);
		switch(j){
		case 0: *(dataPrint+i)=cero;
				break;
		case 1: *(dataPrint+i)=uno;
				break;
		case 2: *(dataPrint+i)=dos;
				break;
		case 3: *(dataPrint+i)=tres;
				break;
		case 4: *(dataPrint+i)=cuatro;
				break;
		case 5: *(dataPrint+i)=cinco;
				break;
		case 6: *(dataPrint+i)=seis;
				break;
		case 7: *(dataPrint+i)=siete;
				break;
		case 8: *(dataPrint+i)=ocho;
				break;
		case 9: *(dataPrint+i)=nueve;
				break;
		default: *(dataPrint+i)=cero;

		}
	}
	*seg1=*(dataPrint+3);
	*seg2=*(dataPrint+2);
	*seg3=*(dataPrint+1);
	*seg4=*(dataPrint);
	free (dataPrint);

}

void hourToSec(int * data, int type){
	int result=0;
	result+=((*data)*10+(*(data+1)))*3600;
	result+=((*((data+2))*10)+(*(data+3)))*60;
	if(type==0)
		segsAlarm=result;
	else{
		segs=result;
		oldTime=segs;
	}
}


static void ControlTime(){
	alt_ic_irq_disable(TIMER_IRQ_INTERRUPT_CONTROLLER_ID, TIMER_IRQ);
	*timer_status_ptr = 0;
	segs+=1;
	if (segs==(oldTime+60)){
		mins++;
		if(mins==60){
			mins=0;
			hours++;
			if(hours==24){
				hours=0;
			}
		}
		*(time+3)=mins%10;
		*(time+2)=(int)mins/10;
		*(time+1)=hours%10;
		*(time)=(int)hours/10;
		printLeds(time);
		oldTime+=60;
		if(segs == 86400){
				segs=0;
				oldTime=0;
		}
		if (segs==segsAlarm){
			int timeAlarm;
			for(timeAlarm=0; timeAlarm<3;timeAlarm++){
				*leds=1;
				usleep(1000000);
				*leds=2;
				usleep(1000000);
				*leds=4;
				usleep(1000000);

			}
			*leds=0;

		}
	}
	alt_ic_irq_enable(TIMER_IRQ_INTERRUPT_CONTROLLER_ID, TIMER_IRQ);
}

void setMode(){
	alt_ic_irq_disable(BUTTON1_IRQ_INTERRUPT_CONTROLLER_ID, BUTTON1_IRQ);
	if ((*(buttonMenu + 0x3)) > 0x0){
		*(buttonMenu+0x3) = 0x0;
		mode+=1;
		if(mode==0){
			printLeds(time);
			*leds=0;
		}
		else if (mode == 1){
			printLeds(alarmV);
			*leds=8;
		}
		else if (mode==2){
			printLeds(time);
			*leds=8;
		}
		else{
			mode=0;
			*leds=0;
		}
		printf("Mode: %d \n", mode);
	}
	alt_ic_irq_enable(BUTTON1_IRQ_INTERRUPT_CONTROLLER_ID, BUTTON1_IRQ);
}

void moveIzq(){
	alt_ic_irq_disable(BUTTON2_IRQ_INTERRUPT_CONTROLLER_ID, BUTTON2_IRQ);
	if ((*(buttonLeft + 0x3)) > 0x0){
		*(buttonLeft+0x3) = 0x0;
		if(mode!=0){
			*leds=8;
			if(ind==0){
				ind++;
				*leds=16;
			}
			else if(ind==1){
				ind++;
				*leds=32;
			}
			else {
				ind=0;
				*leds=8;
			}
			printf("Ind: %d \n", ind);
		}
		else
			*leds=0;
	}
	alt_ic_irq_enable(BUTTON2_IRQ_INTERRUPT_CONTROLLER_ID, BUTTON2_IRQ);
}

void upValue(){
	alt_ic_irq_disable(BUTTON3_IRQ_INTERRUPT_CONTROLLER_ID, BUTTON3_IRQ);
	if ((*(buttonUp + 0x3)) > 0x0){
		*(buttonUp+0x3) = 0x0;
		if(mode==2){
			if(ind==0){
				mins++;
				if(mins%10 == 0)
					mins-=10;
			}
			else if(ind==1){
				mins=mins+10;
				if(mins>=60)
					mins=mins%10;
				printf("Mins: %d\n", mins);
			}
			else {
				if(hours==23)
					hours=0;
				else
					hours++;
			}

			*time=(int)hours/10;
			*(time+1)=hours%10;
			*(time+2)=(int)mins/10;
			*(time+3)=mins%10;
			hourToSec(time,1);
			printLeds(time);
		}
		else if(mode==1){
			if(ind==0){
				minsAlm++;
				if(minsAlm%10 == 0)
					minsAlm-=10;
			}
			else if(ind==1){
				minsAlm=minsAlm+10;
				if(minsAlm>=60)
					minsAlm=minsAlm%10;
			}
			else {
				if(hoursAlm==23)
					hoursAlm=0;
				else
					hoursAlm++;
			}

			*alarmV=(int)hoursAlm/10;
			*(alarmV+1)=hoursAlm%10;
			*(alarmV+2)=(int)minsAlm/10;
			*(alarmV+3)=minsAlm%10;
			hourToSec(alarmV,0);
			printLeds(alarmV);
		}
	}
	alt_ic_irq_enable(BUTTON3_IRQ_INTERRUPT_CONTROLLER_ID, BUTTON3_IRQ);
}
static void initTimer(){
	segs=0;
	void* edge_capture_ptr = (void*) &edge_capture;
	*timer_mask_ptr = 1;
	*timer_edge_cap_ptr = 0xF;
	alt_ic_isr_register(TIMER_IRQ_INTERRUPT_CONTROLLER_ID, TIMER_IRQ,
			ControlTime, edge_capture_ptr, 0X0);
	*timer_control_ptr = 7;
	*timer_status_ptr = 0;
}

static void initButton1(){
	void* edge_capture_ptr = (void*) &edge_capture;
	*btn_mask_ptr1 = 0xF;
	*btn_edge_ptr1 = 0xF;
	*btn_direction_ptr1 = 0;
	alt_ic_isr_register(BUTTON1_IRQ_INTERRUPT_CONTROLLER_ID, BUTTON1_IRQ,
				setMode, edge_capture_ptr, 0X0);

}

static void initButton2(){
	void* edge_capture_ptr = (void*) &edge_capture;
	*btn_mask_ptr2 = 0xF;
	*btn_edge_ptr2 = 0xF;
	*btn_direction_ptr2 = 0;
	alt_ic_isr_register(BUTTON2_IRQ_INTERRUPT_CONTROLLER_ID, BUTTON2_IRQ,
				moveIzq , edge_capture_ptr, 0X0);

}
static void initButton3(){
	void* edge_capture_ptr = (void*) &edge_capture;
	*btn_mask_ptr3 = 0xF;
	*btn_edge_ptr3 = 0xF;
	*btn_direction_ptr3 = 0;
	alt_ic_isr_register(BUTTON3_IRQ_INTERRUPT_CONTROLLER_ID, BUTTON3_IRQ,
			upValue, edge_capture_ptr, 0X0);

}
int main()
{
	initTimer();
	initButton1();
	initButton2();
	initButton3();
	time=malloc((sizeof(int))*4);
	alarmV=malloc((sizeof(int))*4);
	int i;
	for (i=0;i<4;i++){
		*(time+i)=0;
		*(alarmV+i)=0;
	}
	printLeds(time);

  /* Event loop never exits. */
  while (1){
	  int horaUart, minUart;
	  horaUart=alt_getchar();
	  horaUart--;
	  printf("Hora: %d\n", horaUart);
	  minUart=alt_getchar();
	  minUart--;
	  printf("Min: %d\n", minUart);
	  *(alarmV+3)=minUart%10;
	  *(alarmV+2)=(int)minUart/10;
	  *(alarmV+1)=horaUart%10;
	  *(alarmV)=(int)horaUart/10;
	  hourToSec(alarmV, 0);


  }


  return 0;
}
