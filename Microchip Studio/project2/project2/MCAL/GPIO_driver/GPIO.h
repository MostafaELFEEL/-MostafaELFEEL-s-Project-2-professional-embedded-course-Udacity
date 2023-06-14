# ifndef  DIO_H_
#define  DIO_H_
#include "../registors/registors.h"

#define INPUT 0
#define OUTPUT 1

#define HIGH 1
#define LOW 0

void GPIO_init(uint8_t pin,uint8_t port, uint8_t direction);
void GPIO_write(uint8_t pin,uint8_t port, uint8_t value);
void GPIO_toggle(uint8_t pin,uint8_t port);
void GPIO_read(uint8_t pin,uint8_t port, uint8_t *value);

#endif