#include<stdio.h>
void main()
{
	int father=0,mother=0,son=0,shambo=0;
	printf("enter the values ");
	scanf("%d%d%d%d",&shambo,&father,&mother,&son);
	while(1){
	if(shambo<father){
		printf("F");
	break;}
	else {
		shambo=shambo-father;
	}
	if(shambo<mother){
		printf("M");
	break;}
	else {
		shambo=shambo-mother;
	}
	if(shambo<son){
		printf("T");
	break;}
	else {
		shambo=shambo-son;
	}
	}
}