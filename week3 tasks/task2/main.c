#include<stdio.h>
unsigned long long int Fibonacci(int num);
int main(){
	printf("the max fabi of 94 is %llu\n",Fibonacci(94));
	int nth=0;
	printf("enter the n");
	scanf("%d",&nth);
		printf("%dth number is %llu\n", nth, Fibonacci(nth));
		return 0;
}