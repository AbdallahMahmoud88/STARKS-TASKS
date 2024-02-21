#include<stdio.h>
#include <ctype.h>
void main(){
	char str[100];
	char *ptr=str;
	printf("enter the string");
	gets(ptr);
	int num_vow=0,num_cons=0;
	for (int i=0;*(ptr+i)!='\0';i++){
		if(isalpha(*(ptr+i))){
			if(tolower(*(ptr+i)) == 'a' || tolower(*(ptr+i)) == 'e' || tolower(*(ptr+i)) == 'i' || tolower(*(ptr+i)) == 'o' || tolower(*(ptr+i)) == 'u')num_vow++;
			else num_cons++;
		}
	}
	printf("number of vowels = %d \t number of consonants = %d", num_vow,num_cons);
	}
	
