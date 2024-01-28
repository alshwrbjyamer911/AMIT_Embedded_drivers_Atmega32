
#ifndef BIT_MATH_H_
#define BIT_MATH_H_
#define CLEAR_BIT(x,bitnum) x=x&(~(1<<bitnum))
#define SET_BIT(x,bitnum) x=x|(1<<bitnum)
#define TOGGLE(x,bitnum) x^=(1<<bitnum)
#define GIT_BIT(x,bitnum) ((x>>bitnum)&1)





#endif /* BIT_MATH_H_ */