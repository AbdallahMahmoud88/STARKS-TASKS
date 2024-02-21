#include<stdio.h>
int fac(int * fact);

void main(){
	int fa;
	int * ptr=&fa;
	printf("enter the number to get factorial");
	scanf("%d",ptr);
int factor=fac(ptr);
	printf("the  factorial %d",factor);
}
int fac(int * fact){
if (*fact ==0||*fact==1) return 1;
return (*fact)-- * fac(fact);
}
