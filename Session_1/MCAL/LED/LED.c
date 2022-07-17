/*
 * LED.c
 *
 * Created: 7/17/2022 8:41:07 PM
 *  Author: BLU-RAY
 */ 
#include "LED.h"


void LED_Init()
{
	LED_DDR |= (1 << LED_PIN);
}

void toggle_LED()
{
	LED_PORT ^= (1 << LED_PIN); 
}