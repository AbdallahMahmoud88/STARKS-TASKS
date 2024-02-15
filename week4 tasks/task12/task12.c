#include<stdio.h>

int main()
{
    int arr[10]={0};
    for(int i=0; i<10; i++) {
       printf("enter the %dth values ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            if(arr[j]>arr[j+1]) {
                int value =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=value;
            }
        }
    }
printf("the maximum number is %d \n",arr[9]);
  printf("the minimum number is  %d\n",arr[0]);
        
    return 0;
}