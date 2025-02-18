#include <stdio.h>
int main() {

int i, j, n, isIdentity = 1;

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
	
		if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
		
			isIdentity = 0;
			break;
		}
	} if(! isIdentity) {
	
		break;
	}
}

if(isIdentity == 1) {

	printf("The matrix is an identity matrix \n");
}else {

	printf("The matrix is not an identity matrix \n");
}

return 0;

}
