/*
 * SSPROG.c
 *
 * Created: 1/27/2024 8:38:09 PM
 *  Author: AMER
 */ 
#include <util/delay.h>
#include "BIT_MATH.h"
#include "DIO_INT.h"
#include "STD_TYPES.h"
#include "S_7.h"
SS_WRITE(char num)
{
    
	DDRB=0b00000110;
	en_2;
	PORTA=((num/10)<<4);
	pin_dir(PINA7_S,OUTPUT);
	pin_dir(PINA6_S,OUTPUT);
	pin_dir(PINA4_S,OUTPUT);
	pin_dir(PINA5_S,OUTPUT);
	_delay_ms(10);
	dis_2;
	en_1;
	PORTA=((num%10)<<4);
	_delay_ms(10);
	dis_1;
	
	
}