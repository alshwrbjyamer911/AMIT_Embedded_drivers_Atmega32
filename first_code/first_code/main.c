#include "BIT_MATH.h"


char*portc=(char*)0x35;
char*ddrc=(char*)0x34;
char*pinc=(char*)0x33;

int main(void)
{
  
    while (1) 
    {
		SET_BIT(*ddrc,7);
		SET_BIT(*portc,7);
			
    }
}

