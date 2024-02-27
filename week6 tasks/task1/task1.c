#include<stdio.h>
#include"types.h"

struct employees {
	u16 salary ;
	u16 bonus ;
	u16 deduction ;
	
}Ahmed,Waleed,Amr;

void main (){
	printf("please enter the salary of Ahmed \n");
	scanf("%d",&Ahmed.salary);	
	printf("please enter the bonus of Ahmed \n");
	scanf("%d",&Ahmed.bonus);
	printf("please enter the deduction of Ahmed  \n");
	scanf("%d",&Ahmed.deduction);		
	printf("please enter the salary of Waleed \n");
	scanf("%d",&Waleed.salary);	
	printf("please enter the bonus of Waleed \n");
	scanf("%d",&Waleed.bonus);
	printf("please enter the deduction of Waleed \n");
	scanf("%d",&Waleed.deduction);	
	printf("please enter the salary of Amr \n");
	scanf("%d",&Amr.salary);	
	printf("please enter the bonus of Amr \n");
	scanf("%d",&Amr.bonus);
	printf("please enter the deduction of Amr \n");
	scanf("%d",&Amr.deduction);	
u32 total =Ahmed.salary + Ahmed.bonus -Ahmed.deduction + Waleed.salary + Waleed.bonus -Waleed.deduction+Amr.salary + Amr.bonus -Amr.deduction;
printf("the total value =  %d",total);


}