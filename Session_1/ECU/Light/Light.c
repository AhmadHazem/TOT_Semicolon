/*
 * Light.c
 *
 * Created: 7/17/2022 8:40:29 PM
 *  Author: BLU-RAY
 */ 
#include "Light.h"

void light_init()
{
	LED_Init();
}

void flicker()
{
	toggle_LED();
}