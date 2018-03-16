/*
 * GccApplication2.c
 *
 * Created: 2/26/2018 10:39:14 AM
 * Author : peter
 */ 
#define F_CPU 16000000UL

//#define set_sleep_mode(EMCUCR)

#include <avr/io.h>
//#include <util/delay.h>
#include <avr/sleep.h>
#include <avr/power.h>



int main(void)
{
	
    /* Replace with your application code */
    while (1) 
    {
	    //DDRD |= 0x20;
		//DDRB |= 0x00;
	    //PORTD ^= 0x30;
	    //_delay_ms(3000);
		set_sleep_mode(SLEEP_MODE_PWR_DOWN);
		sleep_enable();
		//sleep_mode();
		sleep_cpu();
		
    }
}

