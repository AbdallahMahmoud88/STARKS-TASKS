#include<stdio.h>
void main(){
	int n=0;
	printf("enter the size of array");
	scanf("%d",&n);
	int arr[n];
	int *nums =arr;
	for(int i = 0; i < n; i++) {
		printf(" element - %d : ", i+1);
		scanf("%d", nums+i);
	}
		for(int i=n-1;i>=0;i--){
		printf("the element after reverse %d is %d\n",i,*(nums+i));		
	}
}
/*	printf(" Input %d numbers of elements in the array :\n", n);
	for(int i = 0; i < n; i++) {
		printf(" element - %d : ", i+1);
		scanf("%d", nums+i);
	}*/