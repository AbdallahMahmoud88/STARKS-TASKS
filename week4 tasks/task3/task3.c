#include<stdio.h>
int *max_arr(int arr[],int size_arr);
int *min_arr(int arr[],int size_arr);
void main(){
	
	int n=0;
	printf("enter the size of array ");
	scanf("%d",&n);
	
	int arr[n];
	
		for(int i=0;i<n;i++){
			printf("enter the num in index %d  ",i);
			scanf("%d",&arr[i]);
		}
	int * max_n = max_arr(arr, n);
	int * min_n = min_arr(arr, n);
		printf("the Maximum number is %d it's indix %d \n",max_n[0],max_n[1]);
		printf("the Minimum number is %d it's indix %d",min_n[0],min_n[1]);
}