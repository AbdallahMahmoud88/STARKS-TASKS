#include<stdio.h>
int sum(int arr[]);
int prod(int arr[]);
void main(){
	int arr[10];
		for(int i=0;i<10;i++){
			printf("enter the %dth num   ",i+1);
			scanf("%d",&arr[i]);
		}
		int sum_even=sum(arr);
		int prod_odd=prod(arr);
		printf("the sum of even number is %d  \n the product of odd number is %d",sum_even,prod_odd);
}