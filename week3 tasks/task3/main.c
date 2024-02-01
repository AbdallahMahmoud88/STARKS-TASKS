#include <stdio.h>
int bin(int x);
int main(void) {
	
		int num;
	printf("Please Enter the decimal number to be converted to binary : ");
	scanf("%d", &num);
	int binary=bin(num);
	printf(" the number in binary =%d ",binary);
		return(0);
}