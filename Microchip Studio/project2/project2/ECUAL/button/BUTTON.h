#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../MCAL/GPIO_driver/GPIO.h"
void button_init (uint8_t pin,uint8_t port);
void button_read(uint8_t pin,uint8_t port, uint8_t*value);
void button_initialization();
#endif 