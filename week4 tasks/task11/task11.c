#include<stdio.h>
int main()
{

    char str1 [200];
    char str2 [200];
    int len1=0;
    printf("enter the first  string ");
    gets(str1);
    printf("enter the second string ");
    gets(str2);
    for(int i=0 ; str1[i]!='\0'; i++) {
        len1++;
     }
    
str1[len1]=' ' ;
len1++; 
     for(int i=0; str2[i]!='\0'; i++) {

        str1[len1]=str2[i];
        len1++;
    }

printf("%s",str1);
return 0;
}