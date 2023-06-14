#include "GPIO.h"

void GPIO_init(uint8_t pin,uint8_t port, uint8_t direction){
	switch(port){
		case 'A' :
		if (direction == INPUT){
			DDRA &=~ (1<< pin); 
		}
		if (direction == OUTPUT)
		{
			DDRA |= (1<< pin);
		}
		break;
		case 'B' :
		if (direction == INPUT){
			DDRB &=~ (1<< pin);
		}
		if (direction == OUTPUT)
		{
			DDRB |= (1<< pin);
		}
		break;
		case 'C' :
		if (direction == INPUT){
			DDRC &=~ (1<< pin);
		}if (direction == OUTPUT)
		{
			DDRC |= (1<< pin);
		}
		break;
			case 'D' :
			if (direction == INPUT){
				DDRD &=~ (1<< pin);
			}if (direction == OUTPUT)
			{
				DDRD |= (1<< pin);
			}	
			break;	
	}	
}

void GPIO_write(uint8_t pin,uint8_t port, uint8_t value){
	switch(port){
		
		case 'A' :
		if (value == LOW){
			PORTA &=~ (1<< pin);
		}
		if (value == HIGH)
		{
			PORTA |= (1<< pin);
		}
		break;
		case 'B' :
		if (value == LOW){
			PORTB &=~ (1<< pin);
		}if (value == HIGH)
		{
			PORTB |= (1<< pin);
		}	
		break;
		case 'C' :
		if (value == LOW){
			PORTC &=~ (1<< pin);
		}if (value == HIGH)
		{
			PORTC |= (1<< pin);
		}
		break;
		case 'D' :
		if (value == LOW){
			PORTD &=~ (1<< pin);
		}if (value == HIGH)
		{
			PORTD |= (1<< pin);
		}	
		break;	
	}
}

void GPIO_read(uint8_t pin,uint8_t port, uint8_t *value){
	switch(port){
		case 'A' :
		*value = PINA &(1<<pin)>>pin;
			break;
		case 'B' :
		*value = PINB &(1<<pin)>>pin;
		break;
		case 'C' :
		*value = PINC &(1<<pin)>>pin;
		break;
		case 'D' :
		*value = PIND &(1<<pin)>>pin;
		break;
	}
}

void GPIO_toggle(uint8_t pin,uint8_t port){
	switch(port){
		case 'A' :
		PORTA ^= (1<<pin);
		break;
		case 'B' :
		PORTB ^= (1<<pin);
		break;
		case 'C' :
		PORTC ^= (1<<pin);
		break;
		case 'D' :
		PORTD ^= (1<<pin);
		break;
	}
	
}


