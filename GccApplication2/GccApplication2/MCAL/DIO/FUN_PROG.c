/*
   Author: AMER
 */ 
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO_INT.h"
#include "S_7.h"
#define F_CPU 16000000UL
#include <util/delay.h>


void pin_dir(u8 P_V,u8 dir)
{
	if(P_V<8)
	{
		if(dir==INPUT)
		{
			CLEAR_BIT(DDRA,P_V);
		}
		else if(dir==OUTPUT)
		{
			SET_BIT(DDRA,P_V);
		}
	}
	else if (P_V<16)
	{
		if(dir==INPUT)
		{
			CLEAR_BIT(DDRB,(P_V-8));
		}
		else if(dir==OUTPUT)
		{
			SET_BIT(DDRB,(P_V-8));
		}
	}
	else if (P_V<24)
	{
		if(dir==INPUT)
		{
			CLEAR_BIT(DDRC,(P_V-16));
		}
		else if(dir==OUTPUT)
		{
			SET_BIT(DDRC,(P_V-16));
		}
	}
	else if (P_V<32)
	{
		if(dir==INPUT)
		{
			CLEAR_BIT(DDRD,(P_V-24));
		}
		else if(dir==OUTPUT)
		{
			SET_BIT(DDRD,(P_V-24));
		}
	}
	
	
}

void pin_val(u8 P_V,u8 level)
{
	if(P_V<8)
	{
		if(level==LOW)
		{
			CLEAR_BIT(PORTA,P_V);
		}
		else if(level==HIGH)
		{
			SET_BIT(PORTA,P_V);
		}
	}
	else if (P_V<16)
	{
		if(level==LOW)
		{
			CLEAR_BIT(PORTB,(P_V-8));
		}
		else if(level==HIGH)
		{
			SET_BIT(PORTB,(P_V-8));
		}
	}
	else if (P_V<24)
	{
		if(level==LOW)
		{
			CLEAR_BIT(PORTC,(P_V-16));
		}
		else if(level==HIGH)
		{
			SET_BIT(PORTC,(P_V-16));
		}
	}
	else if (P_V<32)
	{
		if(level==LOW)
		{
			CLEAR_BIT(PORTD,(P_V-24));
		}
		else if(level==HIGH)
		{
			SET_BIT(PORTD,(P_V-24));
		}
	}
	
	
}
char git_(u8 P_V)
{
	if(P_V<8)
	{	return GIT_BIT(PINA,P_V);
	}
	else if (P_V<16)
	{	return GIT_BIT(PINB,(P_V-8));
	}
	else if (P_V<24)
	{	return GIT_BIT(PINC,(P_V-16));
	}
	else if (P_V<32)
	{	return GIT_BIT(PIND,(P_V-24));}
 }
void toggle_(u8 P_V)
{
	if(P_V<8)
		TOGGLE(PORTA,P_V);
	
	else if (P_V<16)
	TOGGLE(PORTB,(P_V-8));
	
	
	else if (P_V<24)
	TOGGLE(PORTC,(P_V-16));
	
	else if (P_V<32)
	TOGGLE(PORTD,(P_V-24));
}
void stop_watch(u8 time)
{
	for(u8 i=0;i<time;i++)
	{
		for(u8 j=0;j<=50;j++)
		{
			SS_WRITE(i);
			_delay_ms(20);
		}
		if(git_(PINB0_S))
		{
			while(1)
			{
				if(PINB0_S)
					{
						SS_WRITE(i);
					}
			}
		}
		
	}
}
void timer_(u8 time)
{
	for(u8 i=time;i!=0;i--)
	{
		for(u8 j=0;j<50;j++)
		{
			SS_WRITE(i);
			_delay_ms(20);
		}
		
	}
}