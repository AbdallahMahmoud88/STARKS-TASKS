#include<stdio.h>
#include"types.h"

struct employees {
	u16 salary ;
	u16 bonus ;
	u16 deduction ;
	
}Ahmed,Waleed,Amr;

void main (){
		printf("Enter the salary of ahmed  then bonus  then deduction : \n");
	scanf("%d %d %d",&Ahmed.salary ,&Ahmed.bonus,&Ahmed.deduction);		
	printf("Enter the salary of Waleed  then bonus  then deduction : \n");
	scanf("%d %d %d",&Waleed.salary ,&Waleed.bonus,&Waleed.deduction);	
	printf("Enter the salary of ahmed  then bonus  then deduction : \n");
	scanf("%d %d %d",&Amr.salary ,&Amr.bonus,&Amr.deduction);

u32 total =Ahmed.salary + Ahmed.bonus -Ahmed.deduction + Waleed.salary + Waleed.bonus -Waleed.deduction+Amr.salary + Amr.bonus -Amr.deduction;
printf("the total value =  %d",total);


}