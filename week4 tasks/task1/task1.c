#include<stdio.h>
int dub(int num);
void main(){
	int n=0;
	printf("enter the number");
	scanf("%d",&n);
		if (dub(n))
		printf("yes");
	else
		printf("no");

}