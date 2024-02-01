#include <stdio.h>
char is_perfect(int n) ;
int main(void) {

	int num;
	do {
		printf("Please Enter the number to check if it's perfect : ");
		scanf("%d", &num);
	} while(num <= 0);
	
	if(is_perfect(num))
		printf("This is a perfect number\n");
	else
		printf("This isn't a perfect number\n");
	
	printf("\nThere are all perfect numbers from 1 to 100 for you :\n");
	
	for(int i = 1; i <= 100; i++) {
		if(is_perfect(i))
			printf("%d\n", i);
	}
	return(0);
}
