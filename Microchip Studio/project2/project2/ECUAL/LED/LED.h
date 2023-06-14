#ifndef LED_H_
#define LED_H_

#include "../../MCAL/GPIO_driver/GPIO.h"
void LED_init(uint8_t pin,uint8_t port);
void LED_ON(uint8_t pin,uint8_t port);
void LED_OFF(uint8_t pin,uint8_t port);
void LED_toggle(uint8_t pin,uint8_t port);
void LED_initialization();
void ALL_LEDS_OFF();

#endif