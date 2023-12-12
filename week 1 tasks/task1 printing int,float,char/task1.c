#include<stdio.h>
void main(){
	char x;
	float f;
	int y;
	printf("enter integer value\n");
	scanf("%d",&y);	
	printf("enter character\n");
	scanf(" %c",&x);
	printf("enter float value\n");
	scanf("%f",&f);
	printf("the integer is %d \n character %c \nthe float  %f  ",y,x,f);
}
