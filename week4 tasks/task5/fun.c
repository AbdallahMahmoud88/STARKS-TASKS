#include<math.h>
int palindrome(int num){
int number=num;
int pal[10]={0},i=0;
for(i=0;num;i++){
	pal[i]=num%10;
	num/=10;
}
int pal_num=0;
int last=--i;
for(int j=0;j<=last;j++){
pal_num+=pal[j]*pow(10,i--);
}
if(pal_num == number)
	return 1;
else return 0;
}