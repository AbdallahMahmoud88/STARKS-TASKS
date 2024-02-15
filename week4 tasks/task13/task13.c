#include<stdio.h>
int max(int arr[]);
int min(int arr[]);
int num_passed(int arr[]);
int num_failed(int arr[]);
int sum(int arr[]);
void main()
{
    int arr1[100];
    int arr2[100];
   int arr3[100];
    for(int i=0; i<10; i++) {
     printf("enter the %dth values ",i+1);
        scanf("%d",&arr1[i]);
	}
    for(int i=0; i<10; i++) {
      printf("enter the %dth values ",i+1);
        scanf("%d",&arr2[i]);
    }
    for(int i=0; i<10; i++) {
       printf("enter the %dth values ",i+1);
        scanf("%d",&arr3[i]);
    }
	printf(" the num of passed students is %d \n",num_passed(arr1)+num_passed(arr2)+num_passed(arr3));
	printf(" the num of failed students is %d \n",num_failed(arr1)+num_failed(arr2)+num_failed(arr3));
	
	if(max(arr1)>max(arr2)){
	if(max(arr1)>max(arr3))
		printf("the highest garde is %d",max(arr1));
	else
			printf("the highest garde is %d",max(arr3));
}
else {
	if(max(arr2)>max(arr3))
		printf("the highest garde is %d",max(arr2));
	else
			printf("the highest garde is %d",max(arr3));
}
if(min(arr1)<min(arr2)){
	if(min(arr1)<min(arr3))
		printf("the lowest garde is %d",min(arr1));
	else
			printf("the lowest garde is %d",min(arr3));
}
else {
	if(min(arr2)<min(arr3))
		printf("the lowest garde is %d",min(arr2));
	else
			printf("the lowest garde is %d",min(arr3));
}
float ave=(float)(sum(arr1)+sum(arr2)+sum(arr3))/3000;
	printf(" the average of the grades %f \n",ave);

}

