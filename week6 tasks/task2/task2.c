#include<stdio.h>
#include"types.h"
typedef struct diff {
	s16 hours;
	s16 minutes;
	s16 seconds;
}time;
time start;
time end;
time difference;

void main (){
	printf("Enter the start time in hour then in minute then in seconds : \n");
	scanf("%d %d %d",&start.hours ,&start.minutes,&start.seconds);
	printf("Enter the end time in hour then in minute then in seconds : \n");
	scanf("%d %d %d",&end.hours ,&end.minutes,&end.seconds);
difference.hours=end.hours-start.hours;
difference.minutes=end.minutes-start.minutes;
difference.seconds=end.seconds-start.seconds;
if(difference.seconds<0){
	difference.seconds+=60;
	difference.minutes-=1;
}
if(difference.minutes<0){
	difference.minutes+=60;
	difference.hours-=1;
}
if(difference.hours<0){
printf("the time you enter is invalid\n");
}
else 
	printf("the difference= %d :%d :%d ",difference.hours,difference.minutes,difference.seconds);

}
