#include <stdio.h>

void rearrange(int *, int *);

int main(void) {
	
	int N=0, M=0,temp=0,sum=0;
	
	do {
		scanf("%d %d", &N, &M);
		if(N <= 0 || M <= 0)
			break;
		if(M<N){
			temp=N;
			N=M;
			M=temp;
		}
		for(int i = N; i <= M; i++) {
			printf("%d ", i);
			sum=sum+ i;
		}
		printf("sum =");
		printf("%d\n", sum);
		
	} while(1);
		
	return(0);
}
