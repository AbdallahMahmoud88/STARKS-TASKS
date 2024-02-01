#include <stdio.h>
#include "main.h"
#include "fun.h"

int main(void) {
		
	float num1, num2;
	
	printf("Please Enter  the two numbers to calculate the average of them : \n");
	
	char contine_or_not;
	do {
		printf("Number 1 : ");
		scanf("%f", &num1);
		
		printf("Number 2 : ");
		scanf("%f", &num2);
		
		printf("The average = %f\n", average(num1, num2));
		
		printf("if you want To calculate again enter 'y'  character or if  you want press any anothe word");
		scanf(" %c", &contine_or_not);
	} while(contine_or_not == 'y');
	
	printf("\nnumber of calling the average function = %d\n", occurs);
	
	return(0);
}

