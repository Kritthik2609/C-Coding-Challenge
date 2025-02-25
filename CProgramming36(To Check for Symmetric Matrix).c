#include <stdio.h>
int main() {

int i, j, n, isSymmetric = 1;

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

int trans[i][j];

for(i = 0; i < n; i++) {

	for(j = 0; j < n; j++) {
	
		trans[j][i] = matrix[i][j];
	}
}

printf("The transposed matrix is \n");

for(i = 0; i < n; i++) {

	for(j = 0; j < n; j++) {
	
		printf("%d \t", trans[i][j]);
	}printf("\n");
}

for(i = 0; i < n; i++) {

	for(j = 0; j < n; j++) {
	
		if(matrix[i][j] != trans[i][j]) {
		
			isSymmetric = 0;
			break;
		}
	} if (! isSymmetric) {
	
		break;
	}
}
if(isSymmetric == 1) {

	printf("The matrix is symmetric \n");
} else {

	printf("The matrix is not symmetric \n");
}
return 0;

}
