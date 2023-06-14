#include "Timer.h"
void delay(uint8_t delay_value){
	counter=1;
	TCCR0 |= 0x05;
	while(counter <= delay_value){
		while((TIFR & (1<<0))==0);  // flag
		TIFR |= (1<<0); // clearing the flag
		counter++;
	}
	TCCR0 = 0;
}

void timer0_initialization(){
	TCCR0 = 0x00; // no prescaler
	TCNT0 = 0x0C; // initial value
}