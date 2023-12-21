#include <stdio.h>

int main(void) {
	
	int n ,a ,b;
	scanf("%d %d %d", &n, &a, &b);
	
	int sum = 0, dig_sum;
	for(int i = 1; i <= n; i++) {
		int j=i;
		int sum1=0;
		while(j!=0){
			sum1+=j%10;
		j/=10;}
		dig_sum=sum1;
		
		if(dig_sum >= a && dig_sum <= b) 
			sum += i;
		}
	
	printf("%d\n", sum);
	
	return(0);
}
