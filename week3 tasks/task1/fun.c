#include<math.h>
 int reverse (int num){
 int res[100];
 int i=0;
 for (i=0;num;i++){
res[i]=num%10;
num=num/10;
 }
 int reve_num=0;
 for(int j=0,end=--i;j<=end;j++){
 reve_num+=res[j]*pow(10,i--);}
 return reve_num;
 }