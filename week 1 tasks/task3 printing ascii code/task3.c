#include<stdio.h>
void main(){
	char x  ;
	printf("enter the character you want ");
	scanf("%c",&x);
	printf("the character is %c \n It's equivalent ascii code %d \n The next character %c \n The pervious character %c",x,x,x+1,x-1);
}
