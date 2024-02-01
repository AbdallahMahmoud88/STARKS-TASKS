#include <stdio.h>
float smallest_num(float num1, float num2, float num3);
int main(void) {
		
	float num[3];
	
	printf("Please Enter three floating numbers : \n");
	for(char i = 0; i <= 2; i++) {
		printf("Number %d : ", i+1);
		scanf("%f", &num[i]);
	}
	
	printf("the smallest number is : %f", smallest_num(num[0], num[1], num[2]));
	
	return(0);
}
