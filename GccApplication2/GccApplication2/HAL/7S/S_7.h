/*
 * S_7.h
 *
 * Created: 1/27/2024 8:37:29 PM
 *  Author: AMER
 */ 
#define en_1 SET_BIT(PORTB,1)
#define en_2 SET_BIT(PORTB,2)
#define dis_1 CLEAR_BIT(PORTB,1)
#define dis_2 CLEAR_BIT(PORTB,2)


#ifndef S_7_H_
#define S_7_H_
void SS_WRITE(u8 num);




#endif /* S_7_H_ */
