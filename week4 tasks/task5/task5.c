#include<stdio.h>
int palindrome(int num);
void main(){
	int num=0;
	printf("enter the number");
	scanf("%d",&num);
	if(palindrome(num)){
		printf("it's palindrome");
	}
	else{
		printf("it's not palindrome");
	}
}