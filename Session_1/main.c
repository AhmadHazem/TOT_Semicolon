/*
 * Session_1.c
 *
 * Created: 7/17/2022 8:30:43 PM
 * Author : BLU-RAY
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include "c:\users\blu-ray\Documents\Atmel Studio\7.0\Session_1\Session_1\ECU\Light\Light.h"

int main(void)
{
	/*
    light_init();
	DDRC = 0xFF;
    while (1) 
    {
		PORTC = ~PORTC;
		_delay_ms(1000);
    }
	*/
	// PUSH_BUTTON code
	/*
	DDRA = 0;
	DDRB = 0xFF;
	PORTA = 0xFF;
	while(1)
	{
		if( (PINA & (1 << PA2)) == 0 )
		{
			PORTB = 0xFF;
		}
	}
	*/
}

