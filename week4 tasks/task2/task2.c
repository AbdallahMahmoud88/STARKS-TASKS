#include<stdio.h>
void main(){
	int arr[5][5];
	int sum_row[5]={0},sum_col[5]={0};
	for(int i=0;i<5;i++){
		printf("enter Row %d \n",i+1);
		for(int j=0;j<5;j++){
			scanf("%d",&arr[i][j]);
		}
	}
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				sum_row[i]+=arr[i][j];
			}
		}		for(int j=0;j<5;j++){
			for(int i=0;i<5;i++){
				sum_col[j]+=arr[i][j];
			}
		}
		printf("total row ");
		for(int i=0;i<5;i++)
			printf("%d " ,sum_row[i]);	
printf("\n");		
		printf("total col ");
		for(int i=0;i<5;i++)
			printf("%d " ,sum_col[i]);
}