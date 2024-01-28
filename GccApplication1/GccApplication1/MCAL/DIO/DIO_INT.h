
#include "STD_TYPES.h"
void set_pin_val(u8 p_n,u8 level);
void read_pin_val(u8 p_n,u8 val);
#ifndef DIO_INT_H_
#define DIO_INT_H_
#define DDRA *((u8*)0X3A)
#define PORTA *((u8*)0X3B)
#define PINA *((u8*)0X39)
#define DIO_PINA0 0
#define DIO_PINA1 1
#define DIO_PINA2 2
#define DIO_PINA3 3
#define DIO_PINA4 4
#define DIO_PINA5 5
#define DIO_PINA6 6
#define DIO_PINA7 7

#define DIO_HIGH 1
#define DIO_LOW 0
#define INPUT 1
#define OUTPUT 0






#endif /* DIO_INT_H_ */