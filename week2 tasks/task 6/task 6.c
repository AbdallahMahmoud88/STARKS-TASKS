#include <stdio.h>
#include <stdlib.h>

int main()
{
int lamik,bob,i;

scanf("%d%d",&lamik,&bob);

    i=0;
while(lamik<=bob){
    lamik*=3;
    bob*=2;
    i++;
}
    printf("%d",i);
}
