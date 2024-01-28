/*
 * IncFile1.h
 *
 * Created: 1/27/2024 12:14:55 AM
 *  Author: AMER
 */ 
#include "STD_TYPES.h"
 void pin_val(u8 P_V,u8 level);
 void pin_dir(u8 P_V,u8 dir);
 char git_(u8 P_V);
 void toggle_(u8 P_V);

#ifndef INCFILE1_H_
#define INCFILE1_H_
//GRG A Adresses;
#define DDRA *(char*)0x3A
#define PORTA *(char*)0x3B
#define PINA *(char*)0x39
//REG B Adresses;
#define DDRB *(char*)0x37
#define PORTB *(u8*)0x38
#define PINB *(u8*)0x36
//REG C Adresses;
#define DDRC *(u8*)0x34 
#define PORTC *(u8*)0x35
#define PINC *(u8*)0x33
//REG P Adresses;
#define DDRD *(u8*)0x31
#define PORTD *(u8*)0x32
#define PIND *(u8*)0x30

//pins access
//A REG Access 
#define PINA0_S 0
#define PINA1_S 1
#define PINA2_S 2
#define PINA3_S 3
#define PINA4_S 4
#define PINA5_S 5
#define PINA6_S 6
#define PINA7_S 7
//B REG Access
#define PINB0_S 8
#define PINB1_S 9
#define PINB2_S 10
#define PINB3_S 11
#define PINB4_S 12
#define PINB5_S 13
#define PINB6_S 14
#define PINB7_S 15
//C REG Access
#define PINC0_S 16
#define PINC1_S 17
#define PINC2_S 18
#define PINC3_S 19
#define PINC4_S 20
#define PINC5_S 21
#define PINC6_S 22
#define PINC7_S 23
//B REG AccessC
#define PIND0_S 24
#define PIND1_S 25
#define PIND2_S 26
#define PIND3_S 27
#define PIND4_S 28
#define PIND5_S 29
#define PIND6_S 30
#define PIND7_S 31
//pin voltage status
#define HIGH 1
#define LOW 0
//pin direction status
#define INPUT 0
#define OUTPUT 1
#endif /* INCFILE1_H_ */
void stop_watch(u8 time);
void timer_(u8 time);