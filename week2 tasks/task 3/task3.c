#include<stdio.h>
void main()
{
int n=0;
printf("enter the num");	
scanf("%d",&n);
for(int i=1;i<=n*4;i++){
if(i%4==0){
	printf("PUM\n");
	continue;
}
	printf("%d",i);
}
	
}