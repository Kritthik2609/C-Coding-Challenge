#include <stdio.h>
int main() {

int i, j, n, sum = 0;

printf("Enter the size of the matrix: ");
scanf("%d", &n);

int matrix[n][n];

printf("Enter the elements of the matrix \n");

for(i = 0; i < n; i++) {

	for(j = 0; j < n; j++) {
	
		scanf("%d", &matrix[i][j]);
	}
}

printf("The matrix is \n");

for(i = 0; i < n; i++) {

	for(j = 0; j < n; j++) {
	
		printf("%d \t", matrix[i][j]);
	}printf("\n");
}

for(i = 0; i < n; i++) {

	for(j = 0; j < n; j++) {
	
		if(i == j) {
		
			sum += matrix[i][j];
		}
	}
}

printf("The trace of the matrix is: %d \n", sum);

return 0;

}

