#include "DIO_INT.h"
#include "BIT_MATH.h"
void set_pin_val(u8 p_n,u8 level)
{
	if(level==DIO_HIGH)
	{
		SET_BIT(PORTA,p_n);	
	}
	else if(level==DIO_LOW)
	{
		CLEAR_BIT(PORTA,p_n);
	}
}
void set_pin_dir(u8 p_n,u8 dir)
{
	if(dir==INPUT)
	{
		CLEAR_BIT(DDRA,p_n);
	}
	else if(dir==OUTPUT)
	{
		SET_BIT(DDRA,p_n);
	}
}
void read_pin_val(u8 p_n,u8 val)
{
	return GIT_BIT(PINA,p_n);
}