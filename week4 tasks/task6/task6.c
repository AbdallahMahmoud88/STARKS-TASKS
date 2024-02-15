#include<stdio.h>
	
void main(){
	int mat1[100][100];
	int mat2[100][100];
	int mult_mat[100][100];
	int row1,col1;
	int row2,col2;
	printf("enter the num of row in the first matrix then enter the num of col\n ");
	scanf("%d %d",&row1,&col1);
	printf("enter the num of row in the second matrix then enter the num of col\n ");
	scanf("%d %d",&row2,&col2);
	if(row2!=col1){
		printf("the num of columns in the first matrix should be equal the num of rows in the second matrix");
	}
	else {
		printf("\nEnter Matrix one data : \n");
		for(int i = 0; i < row1; i++) {
			printf("Enter Row %d : ", i + 1);
			for(int j = 0; j < col1; j++) {
				scanf("%d", &mat1[i][j]);
			}
		}
		
		printf("\nEnter Matrix two data : \n");
		for(int i = 0; i < row2; i++) {
			printf("Enter Row %d : ", i + 1);
			for(int j = 0; j < col2; j++) {
				scanf("%d", &mat2[i][j]);
			}
		}
		for (int i=0;i<row1;i++){
	for (int j=0;j<col2;j++){
		for(int k=0;k<col1;k++){
			mult_mat[i][j]+=mat1[i][k]*mat2[k][j];
		}
	}
	}

				printf("\nMultiplication Matrix: \n");
		for(int i = 0; i < row1; i++) {
			for(int j = 0; j < col2; j++) {
				printf("%d\t", mult_mat[i][j]);
			}
			printf("\n");
		}
	}

}