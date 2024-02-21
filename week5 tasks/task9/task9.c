#include<stdio.h>
void * cube(void * n, int type);

void main() {
	int typ=0;
	printf("choose the type you would to insert 1 for char 2 for int 3 for  long int 4 for float 5 for double ");
	scanf("%d",&typ);
	switch(typ){
		case 1: {
		char ca;
		scanf("%d",&ca);
		printf("the cube of %d = %lld\n", ca, *(long long *)cube(&ca, 1));
		break;
		}
		case 2: {
		int intger=0;
		scanf("%d",&intger);
		printf("the cube of %d = %lld\n", intger, *(long long *)cube(&intger, 2));
		break;
		}
				case 3: {
		long int l_int;
		scanf("%ld",&l_int);
			printf("the cube of %ld = %lld\n", l_int, *(long long *)cube(&l_int, 3));

		break;
		}
				case 4: {
		float fl;
		scanf("%f",&fl);
			printf("the cube of %f = %lf\n", fl, *(double *)cube(&fl, 4));

		break;
		}
		case 5: {
		double dou;
		scanf("%lf",&dou);
			printf("the cube of %lf = %lf\n", dou, *(double *)cube(&dou, 5));
		break;
		}
		default :
		{
			printf("you enter wrong number");
		
		}
		
	}
	
}
void * cube(void * n, int type) {
	switch(type) {
		case 1:
		{
			static long long ans;
			ans = (long long)*(char *)n * (long long)*(char *)n * (long long)*(char *)n;
			return &ans;
		}
		case 2:
		{
			static long long ans;
			ans = (long long)*(int *)n * (long long)*(int *)n * (long long)*(int *)n;
			return &ans;
		}
		case 3:
		{
			static long long int ans;
			ans = (long long)*(long int *)n * (long long)*(long int *)n * (long long)*(long int *)n;
			return &ans;
		}
		case 4:
		{
			static double ans;
			ans = (double)*(float *)n * (double)*(float *)n * (double)*(float *)n;
			return &ans;
		}
		case 5:
		{
			static double ans;
			ans = *(double *)n * *(double *)n * *(double *)n;
			return &ans;
		}
		default:
			return NULL;
	}
}