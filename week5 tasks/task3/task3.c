#include<stdio.h>
int * func(int *ptr1,int * ptr2);
void main (){
	int num1,num2;
	int *ptr1=&num1;
	int *ptr2=&num2;
		printf("enter the first number ");
		scanf("%d",ptr1);
		printf("enter the second number ");
		scanf("%d",ptr2);
	int * math_answer=func(ptr1,ptr2);
		printf("Sum = %d,\nDifference = %d,\nProduct = %d\n", math_answer[0], math_answer[1], math_answer[2]);
		
}
int * func(int * ptr1, int * ptr2) {
	static int answer[3];
	answer[0] = *ptr1 + *ptr2;
	answer[1] = *ptr1 - *ptr2;
	answer[2] = *ptr1 * *ptr2;
	return answer;
}