#ifndef IMPORTANT_H_
#define IMPORTANT_H_
#define SET_BIT(x,BIT_NO) x|=(1<<BIT_NO)
#define CLEAR_BIT(x,BIT_NO) x&=~(1<<BIT_NO)
#define READ_BIT(x,BIT_NO) ((x&(1<<BIT_NO)>>BIT_NO)
#define TOGGLE_BIT(x,BIT_NO) x^=(1<<BIT_NO)
#endif