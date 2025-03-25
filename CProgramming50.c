# include<stdio.h>

# define Max 5

void inputMatrix (int Mat[Max][Max], int rows, int columns) {

int i, j;

for(i = 0; i < rows; i++) {

	for(j = 0; j < columns; j++) {
	
		scanf("%d", &Mat[i][j]);
	}
}
}

void displayMatrix (int Mat[Max][Max], int rows, int columns) {

int i, j;

for(i = 0; i < rows; i++) {

	for(j = 0; j < columns; j++) {
	
		printf("%d \t", Mat[i][j]);
	}
} printf("\n");
}

void addMatrix (int A[Max][Max], int B[Max][Max], int result[Max][Max], int rows, int columns) {

int i, j;

for(i = 0; i < rows; i++) {

	for(j = 0; j < columns; j++) {
	
		result[i][j] = A[i][j] + B[i][j];
	}
}	
}

int main() {

int rows, columns, A[Max][Max], B[Max][Max], result[Max][Max];

printf("Enter the number of rows of Matrix A and Matrix B: ");
scanf("%d", &rows);

printf("Enter the number of columns of Matrix A and Matrix B: ");
scanf("%d", &columns);

inputMatrix (A[rows][columns], rows, columns);

printf("The Matrix A is \n");

displayMatrix (A[rows][columns], rows, columns);

inputMatrix (B[rows][columns], rows, columns);

printf("The Matrix B is \n");

displayMatrix (B[rows][columns], rows, columns);

addMatrix (A[rows][columns], B[rows][columns], result[rows][columns], rows, columns);

printf("The sum of Matrix A & Matrix B is \n");

displayMatrix (result[rows][columns], rows, columns);

return 0;
}
