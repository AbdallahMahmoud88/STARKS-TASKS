#include <stdio.h>
void main()
{
int id=0,password=0,num_of_trials =0;
int real_id=1234,real_password=123678;
printf("enter your id");
scanf("%d",&id);
if(id==real_id){
while(num_of_trials<3){
printf("enter the password");
scanf("%d",&password);
	if(password==real_password){
	printf("welcome");
	break;
	}
	else
	{
	num_of_trials++;
	}
	}
}
else
printf("You are not registered");
if(num_of_trials==3)
	{
		printf("no more tries");
	}
}
