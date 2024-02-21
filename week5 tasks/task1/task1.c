#include<stdio.h>
void main(){
	int alph=(int)'A';
	int *alpha=&alph;
	for(int i=0;i<26;i++){
		printf("%c\t",*alpha+i);
	}
}