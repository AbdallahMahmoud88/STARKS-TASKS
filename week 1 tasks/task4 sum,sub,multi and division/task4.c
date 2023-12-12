#include<stdio.h>
void main(){
	int num1,num2,sum,sub,multi;
	float divide;
	printf("enter the two numbers \n");
	scanf("%d",&num1);	
	scanf("%d",&num2);
	sum=num1+num2;
	sub=num1-num2;
	multi=num1*num2;
	divide=(float)num1/(float)num2;
	printf("the addition =%d\n the subtraction =%d\n the multiplication=%d\n the division=%f",sum,sub,multi,divide);
}
