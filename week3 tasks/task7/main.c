#include<stdio.h>
int quality(int marks);
void main(){
	int degree=0,average=0;
	printf("enter the degree : ");
	scanf("%d",&degree);
	average=quality( degree);
		printf(" the qualitypoint =%d ",average);
}