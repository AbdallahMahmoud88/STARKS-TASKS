#include <stdio.h>

char is_prime(int n);
int main(void) {
		
	int num;
	printf("Please Enter the number to make sure that it's  prime : ");
	scanf("%d", &num);
	
	if(is_prime(num))
		printf("This is a prime number\n");
	else
		printf("This isn't a prime number\n");
	
	return(0);
}

