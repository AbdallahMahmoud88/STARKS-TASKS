#include<stdio.h>
void main (){
		int n=0;
	printf("enter the size of array");
	scanf("%d",&n);
	int arr[n];
	int *nums =arr;
	for(int i = 0; i < n; i++) {
		printf(" element - %d : ", i+1);
		scanf("%d", nums+i);
	}
	
	    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(*(nums+j)>*(nums+j+1)) {
                int value =*(nums+j);
                *(nums+j)=*(nums+j+1);
                *(nums+j+1)=value;
            }
        }
    }
	
	for(int i=0;i<n;i++){
		printf("the element after sorting %d is %d\n",i,*(nums+i));		
	}
}
