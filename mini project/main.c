#include<stdio.h>
#include "fun.h"
void main(){
static int  product  [5][2];
char *  names_product[5] = {"molto", "hot", "cola","mint","strawberry"};
product[0][0] =10,product[0][1]  =15;
product[1][0] =13,product[1][1]  =20;
product[2][0] =11,product[2][1]  =24;
product[3][0] =2,product[3][1]  =12;
product[4][0] =2,product[4][1]  =13;
static int user1_balance=150;
	for(;;){
		
		int log =choose_mode();
		if (log ==1){
			int test= admin(0);
			if(test ==1){
				items(product,5);
				int choose;
				printf("do you wnat to change any quantity if  yes press 1 if no press 2\n");
				scanf("%d",&choose);
				if(choose ==1){
					change(product);
					
					}
			
			
			}
			
		}
		else if (log==2){
			int y=0;
			printf("choose 1 for user and 2  for guest");
			scanf("%d",&y);
			if(y==1){
			int test= admin(1);
			items(product,3);
			int price_of_all =buy(product);
			int card_or_cash=0;
			printf("choose if you want to pay cash or subscriber card for card press 1 and for cash  press any another number");
				fflush(stdin);
			scanf("%d",&card_or_cash);
			fflush(stdin);
			if(card_or_cash==1){

				int done_or_not= card (price_of_all,&user1_balance);
				if(done_or_not==0){
					printf("your balanceisn't enough you need to buy using cash" ) ;
					cash(price_of_all);
				}
				else printf("the process is done");
			}
			else  cash(price_of_all);
			}
			else{
				items(product,3);
				int price_of_all =buy(product);
				cash(price_of_all);
			}
		}
	}
}
	
		

	
