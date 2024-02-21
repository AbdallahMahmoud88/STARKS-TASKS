#include<stdio.h>
void searching(char *ptr1,char * ptr2);
void main(){
	char str1[100];
	char *ptr1=str1;
	printf("enter the source string");
	gets(ptr1);		
	char str2[100];
	char *ptr2=str2;
	printf("\nenter the search string");
	gets(ptr2);
		searching(ptr1, ptr2);
}

void searching(char *str1,char * str2){
		for(int i = 0; *(str1+i) != '\0'; i++) {
			
				if(*(str1+i) == *(str2)) {
			int found = 1;
			for(int j = 1, k = i+1; *(str2+j) != '\0'; j++, k++) {
				if(*(str2+j) != *(str1+k)) {
					found = 0;
					break;
				}
			}
			if(found) {
				printf("first occurence of %s at index : %d\n", str2, i);
				return;
			}
		}
	}
	printf("There is no %s at all", str2);
}
