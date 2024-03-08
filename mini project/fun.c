#include<stdio.h>
#include <string.h>

////////////////////////////////////////////////////////////////////////////////////////////

	int choose_mode(void){
	int mode =0;
	choose:
	printf("please enter 1 for admin and 2 for user  ");
	scanf("%d",&mode);
	if(mode==1){
		return mode;
	}
	else if(mode==2){
return mode;
	}
	else {
			goto choose;
	}
	}
	
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 int admin (int y){
	struct info_user {
	char* name ;
	int password;
}admin,user1;

admin.name="abdallah";
admin.password =1324;

user1.name="abdulrahman";
user1.password=5637;
	struct info_user two[2]={admin,user1};
	
	char admin_name[100];
	int admin_password;
	sel:
	printf("please enter your name \n");
	fflush(stdin);
	gets(admin_name);
	fflush(stdin);
	printf("please enter your password \n");
	scanf("%d",&admin_password);
	if(y==0){
	if (!(strcmp(admin_name,"abdallah"))&&admin_password==1324 ){
		printf("sign in as admin\n");
		int one=1;
		return one;
	}
	else {
		printf("wrong name or password");
		goto sel;
	}
	}
	else if (y==1){
			if (!(strcmp(admin_name,"abdulrahman"))&&admin_password==5637 ){
		printf("sign in as user\n");
				int one=1;
		return one;
	}
	else {
		printf("wrong  id or password");
		goto sel;
	}
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	void items(int ptr [5][2],int switching){
		char *  names_product[5] = {"molto", "hot", "cola","mint","strawberry"};
		for(int i=0;i<switching;i++)
			printf("%d - this is %s  it's price %d  it's quantity %d\n",i+1,names_product[i],ptr[i][0],ptr[i][1] );
	}
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		void change(int ptr [5][2]){
			int place=0,num=0;
			char * names_product[5] = {"molto", "hot", "cola","mint","strawberry"};
			again:
			printf("write the number of the product and it quantaty\n");
			scanf("%d%d",&place,&num);
			ptr[place-1][1]=num;
			int again_change=0;
						printf("do you want to change again press 1 if yes\n");
			scanf("%d",&again_change);
			if (again_change==1)
			goto again;
		}
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		int buy(int ptr [5][2]){
			int num_product=0,total_price=0,again_or=0;
			fir:
			printf("choose what you want to buy \n");
			fflush(stdin);
			scanf("%d",&num_product);
			fflush(stdin);
			ptr [num_product-1][1]-=1;
			total_price+= ptr [num_product-1][0];
			if(num_product==2){
				int flavor=0;
			printf("do you want a flavor press 3 for mint it's 2 pound or press 4 for strawberry it's 2 pound or any another number  for no thing \n");
			fflush(stdin);
			scanf("%d",&flavor);
			if(flavor==3||flavor==4){
			ptr [flavor][1]-=1;
			total_price+= ptr [flavor][0];
			}
			}
			printf("do you want to buy more press 1 if yes\n");
			fflush(stdin);
			scanf("%d",&again_or);
			fflush(stdin);
			if(again_or==1)
				goto fir;
			else {
				printf("the total = %d\n",total_price);
				return total_price;
			}
		}
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		void cash(int total){
			int paid_money=0;
			paying:
			printf("please pay for the machine %d pounds to get what you want\n ",total);
						fflush(stdin);
			scanf("%d",& paid_money);
			fflush(stdin);
			int remaining= paid_money- total;
			if(remaining>=0)
				printf("every thing is done and your remaning = %d\n",remaining);
			else{ printf("the money you entered is not enough\n");
			goto paying;
			}
			
		}
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		int card (int total,int *balance){
			int remaining= *balance- total;
			int ok=0;
			if(remaining>=0){
				*balance-=total;
			printf("the rest of the balance is  %d \n ",*balance);
					int one=1;
		return one;
			}
			else return ok;
		}
		
		
		
		