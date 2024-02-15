#include<stdio.h>
void main(){
	int n=0;
	int count =0;
	printf("enter the size of the array");
	scanf("%d",&n);
	int arr[n];
int uni[100];
int indix[100];

	for(int i=0;i<n;i++)
	{
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	int num =0;
	for(int i=0;i<n;i++){
		num=0;
		for(int j=0;j<n;j++){
			
			if(j==i)
				continue;
			
			if (arr[j]==arr[i]) {
				num++;
			}
			
		}
		if(num==0){
			uni[count]=arr[i];
			count++;
		}
	}
	if (count!=0){
		for(int i=0;i<count;i++){
			printf(" the unique number: %d ",uni[i]);
		}
	}
else printf("there's no unique element");
}