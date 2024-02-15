#include<stdio.h>
int main()
{

    char str1 [200];
    char str2 [200];
    int len1=0,len2=0;
	int eq=0;
    printf("enter the first  string ");
    gets(str1);
    printf("enter the second string ");
    gets(str2);
    for(int i=0 ; str1[i]!='\0'; i++) {
        len1++;
     }
     
     for(int i=0; str2[i]!='\0'; i++) {
        len2++;
    }

if(len1!=len2)
	printf("not equal");
else {
	for(int i=0;i<len1;i++){
		if(str1[i]!=str2[i]){
			eq++;
		}
	}
}
if(eq==0){
					printf("equal");
}
else
					printf("not equal");
return 0;
}