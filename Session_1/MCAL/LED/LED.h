/*
 * LED.h
 *
 * Created: 7/17/2022 8:40:50 PM
 *  Author: BLU-RAY
 */ 
#include <avr/io.h>

#define LED_PORT PORTC
#define LED_PIN PC0
#define LED_DDR DDRC

#ifndef LED_H_
#define LED_H_

void LED_Init();
void toggle_LED();



#endif /* LED_H_ */