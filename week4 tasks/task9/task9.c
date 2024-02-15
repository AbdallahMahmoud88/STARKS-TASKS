#include<stdio.h>
int main()
{

    char str [200];
    char c;
    printf("enter the string ");
    gets(str);
    printf("enter the character you want to replace ");
    scanf("%c",&c);
    for (int i=0; str[i]!='\0'; i++) {
        if (str[i]==' ') {
            str[i]=c;
        }
    }

    printf ("%s",str);
    return 0;
}