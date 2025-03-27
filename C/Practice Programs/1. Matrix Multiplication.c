// Program for Multiplication of two matrices 
// Matrix A of order m x n.
// Matrxi B of order n x p.

#include <stdio.h>
int main(){
	int m,n,p;
	printf("Enter no. of Rows in Matrix A:\t"); scanf("%d",&m);
	printf("Enter no. of Rows in Matrix B:\t"); scanf("%d",&n);
	printf("Enter no. of Columns in Matrix B:\t"); scanf("%d",&p);
	printf("\n");
	if(m==p){
		printf("Product of given matrices will result into an Square Matrix\n");
	}
	int A[m][n], B[n][p];
	// Part 1
	// Matrix A elements
	printf("Enter Elements for Matrix A\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("A[%d,%d]= ",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	printf("\n");
	// Matrix B elements
	printf("Enter Elements for Matrix B\n");
	for(int i=0; i<n; i++){
		for(int j=0; j<p; j++){
			printf("A[%d,%d]= ",i+1,j+1);
			scanf("%d",&B[i][j]);
		}
	}
	printf("\n");
	// Printing the two matrices
	// Matrix A
	printf("Matrix A\n");
	for(int i=0; i<m; i++){
		printf("\t");
		for(int j=0; j<n; j++){
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	// Matrix B
	printf("Matrix B\n");
	for(int i=0; i<n; i++){
		printf("\t");
		for(int j=0; j<p; j++){
			printf("%d\t",B[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	//Part 2
	int M[m][p];
	
	for(int i=0; i<m; i++){
		for(int j=0; j<p; j++){
			M[i][j]=0;
			for(int k=0; k<n; k++){
				M[i][j]+=(A[i][k]*B[k][j]);
			}
			//printf("%d", M[i][j]); printf("\n");
		}
	}
	
	// Printing the Product of Two Matrices
	printf("Matrix A x B\n");
	for(int i=0; i<m; i++){
		printf("\t");
		for(int j=0; j<p; j++){
			printf("%d\t",M[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
