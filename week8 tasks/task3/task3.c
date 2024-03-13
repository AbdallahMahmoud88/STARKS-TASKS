#include<stdio.h>
#include"fun.h"
void main(){
	int size_arr;
	printf("enter the sizeof array");	
	scanf("%d",&size_arr);
	int arr[size_arr];
	for(int i=0;i<size_arr;i++){
	printf("enter element %d of array",i+1);	
	scanf("%d",&arr[i]);
	}
		int sum =ARRAY_SUM(arr,size_arr);
	printf("the sum of array element %d",sum);
}

 