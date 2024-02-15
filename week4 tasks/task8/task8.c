#include<stdio.h>
void main(){
	char str [200];
	char cha;
	int count=0;
	printf("enter your string");
	gets(str);
	
	printf("enter the character you want to get it's frequency" );
	scanf("%c",&cha);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==cha)
			count++;
	}
	printf("The frequency of (%c) = %d\n", cha,count);
}