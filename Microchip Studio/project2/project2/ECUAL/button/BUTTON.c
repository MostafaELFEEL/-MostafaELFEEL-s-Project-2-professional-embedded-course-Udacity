#include "BUTTON.h"

void button_init (uint8_t pin,uint8_t port){
	GPIO_init(pin,port,INPUT);
}

void button_read(uint8_t pin,uint8_t port, uint8_t*value){
	GPIO_read(pin,port,value);
}

void button_initialization(){
	button_init(2,'D');
}
