#include "INTERRUPTS.h"

void int0_initialization(){
	sei(); // GLOBAL ENABLE INTERRUPTS
	MCUCR |= (1<<ISC00) | (1<<ISC01); // HIGH EDGE INTERRUPT
	GICR |= (1<<INT0); // ENABLE INTERRUPTS
}


