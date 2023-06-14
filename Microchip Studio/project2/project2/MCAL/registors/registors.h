#ifndef REGISTORS_H_
#define REGISTORS_H_

# define TIFR *((volatile uint8_t*)0X58)
# define TCCR0 *((volatile uint8_t*)0X53)
# define TCNT0 *((volatile uint8_t*)0X52)
# define PORTA *((volatile uint8_t*)0X3B)
# define DDRA *((volatile uint8_t*)0X3A)
# define PINA *((volatile uint8_t*)0X39)
# define PORTB *((volatile uint8_t*)0X38)
# define DDRB *((volatile uint8_t*)0X37)
# define PINB *((volatile uint8_t*)0X36)
# define PORTC *((volatile uint8_t*)0X35)
# define DDRC *((volatile uint8_t*)0X34)
# define PINC *((volatile uint8_t*)0X33)
# define PORTD *((volatile uint8_t*)0X32)
# define DDRD *((volatile uint8_t*)0X31)
# define PIND *((volatile uint8_t*)0X30)
typedef unsigned char uint8_t ;

#endif 