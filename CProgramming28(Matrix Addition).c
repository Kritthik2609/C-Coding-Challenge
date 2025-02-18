#include <stdio.h>
int main() {

int i, j, rows1, cols1, rows2, cols2;

printf("Enter the number of rows of matrix A: ");
scanf("%d", &rows1);

printf("Enter the number of columns of matrix A: ");
scanf("%d", &cols1);

int A[rows1][cols1];

printf("Enter the elements of matrix A \n");

for(i = 0; i < rows1; i++) {

	for(j = 0; j < cols1; j++) {
	
		scanf("%d", &A[i][j]);
	}
}

printf("The matrix A is \n");

for(i = 0; i < rows1; i++) {

	for(j = 0; j < cols1; j++) {
	
		printf("%d \t", A[i][j]);
	}printf("\n");
}

printf("Enter the number of rows of matrix B: ");
scanf("%d", &rows2);

printf("Enter the number of columns of matrix B: ");
scanf("%d", &cols2);	

int B[rows2][cols2];

printf("Enter the elements of matrix B \n");

for(i = 0; i < rows2; i++) {

	for(j = 0; j < cols2; j++) {
	
		scanf("%d", &B[i][j]);
	}
}

printf("The matrix B is \n");

for(i = 0; i < rows2; i++) {

	for(j = 0; j < cols2; j++) {
	
		printf("%d \t", B[i][j]);
	}printf("\n");
}	

int sum[i][j];

if(rows1 != rows2 && cols1 != cols2) {

	printf("The matrix addition is not possible \n");
}else {

	for(i = 0; i < rows1; i++) {

		for(j = 0; j < cols1; j++) {
	
		sum[i][j] = A[i][j] + B[i][j];
	}
}

printf("The sum of matrix A and matrix B is \n");

for(i = 0; i < rows1; i++) {

	for(j = 0; j < cols1; j++) {
	
		printf("%d \t", sum[i][j]);
	}printf("\n");
}
}	

return 0;

}
