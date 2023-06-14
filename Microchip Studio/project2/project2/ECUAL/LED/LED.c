#include "LED.h"

void LED_init(uint8_t pin,uint8_t port){
	GPIO_init(pin,port,OUTPUT);
}

void LED_ON(uint8_t pin,uint8_t port){
	GPIO_write(pin,port,HIGH);
}

void LED_OFF(uint8_t pin,uint8_t port){
	GPIO_write(pin,port,LOW);
}

void LED_toggle(uint8_t pin,uint8_t port){
	GPIO_toggle(pin,port);
}

void LED_initialization(){
	LED_init(0,'A');
	LED_init(1,'A');
	LED_init(2,'A');
	LED_init(0,'B');
	LED_init(1,'B');
	LED_init(2,'B');
}

void ALL_LEDS_OFF(){
	LED_OFF(0,'A');
	LED_OFF(1,'A');
	LED_OFF(2,'A');
	LED_OFF(0,'B');
	LED_OFF(1,'B');
	LED_OFF(2,'B');
}