#include <stdio.h>
int main() {

int i, j, m, n, sum = 0;

printf("Enter the number of rows: ");
scanf("%d", &m);

printf("Enter the number of columns: ");
scanf("%d", &n);

int matrix[m][n];

printf("Enter the elements of the matrix \n");

for(i = 0; i < m; i++) {

	for(j = 0; j < n; j++) {
	
		scanf("%d", &matrix[i][j]);
	}
}

printf("The matrix is \n");

for(i = 0; i < m; i++) {

	for(j = 0; j < n; j++) {
	
		printf("%d \t", matrix[i][j]);
	}printf("\n");
}

int trans[i][j];

for(i = 0; i < m; i++) {

	for(j = 0; j < n; j++) {
	
		trans[j][i] = matrix[i][j];
	}
}

printf("The transposed matrix is \n");

for(i = 0; i < n; i++) {

	for(j = 0; j < m; j++) {
	
		printf("%d \t", trans[i][j]);
	}printf("\n");
}

return 0;

}
