#include<stdio.h>
void main(){
	float num1,num2,swaped;
	printf("enter the two float numbers \n");
	scanf("%f",&num1);	
	scanf("%f",&num2);
	printf("the first before swap =%f\n",num1);
	printf("the second before swap =%f\n",num2);
    swaped =num2;
	num2=num1;
	num1=swaped;
	printf("the first after swap =%f\n",num1);
	printf("the second after swap =%f\n",num2);
}
