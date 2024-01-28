/*
 the app file
 * Author : AMER
 */ 
#define F_CPU 16000000UL
#include <util/delay.h>
#include "DIO_INT.h"
#define  TASK_3

int main(void)
{


	#ifdef TASK_1
		 
		stop_watch(50);
		
	#endif

	#ifdef TASK_2
		timer_(5);

	#endif
	#ifdef TASK_3
		while(1)
		{
			if(git_(PIND2_S))
			{
					stop_watch(50);
			}
			if(git_(PINB0_S))
				timer_(60);
		}
		
	#endif
 

}

