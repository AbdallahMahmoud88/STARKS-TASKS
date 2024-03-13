#include <stdio.h>
#include "math.h"
void main(){
	int num1,num2;
	char op;
	printf(" Enter (number1) (operation) (number2) i.e --> (8 + 9), Available operations(+, -, *, /).\n");
		scanf("%d %c %d", &num1, &op, &num2);
	
	switch(op) {
		case '+':
			printf("\nAnswer = %d\n", ADD(num1, num2));
			break;
		case '-':
			printf("\nAnswer = %d\n",  SUBSTRACT(num1, num2));
			break;
		case '*':
			printf("\nAnswer = %d\n",  MULTIPLY(num1, num2));
			break;
		case '/':
			if(num2 == 0) printf("\nDivision by zero is invalid.\n");
			else printf("\nAnswer = %.3f\n", DIVIDE(num1, num2));
			break;
	}	
}