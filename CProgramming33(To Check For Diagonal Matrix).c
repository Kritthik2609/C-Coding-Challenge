#include <stdio.h>
int main() {

int i, j, n, isDiagonal = 1;

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
	
		if((i == j && matrix[i][j] == 0) || (i != j && matrix[i][j] != 0)) {
		
			isDiagonal = 0;
			break;
		}
	} if(! isDiagonal) {
	
		break;	
	}
}

if(isDiagonal == 1) {

	printf("It is a diagonal matrix \n");
}else {

	printf("It is not a diagonal matrix \n");
}

return 0;

}
