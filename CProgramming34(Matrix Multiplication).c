#include <stdio.h>

int main() {

    int rows1, cols1, rows2, cols2, i, j, k;

    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);

    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);

    int matrix1[rows1][cols1];

    printf("Enter the elements of the first matrix \n");

    for(i = 0; i < rows1; i++) {

        for(j = 0; j < cols1; j++) {

            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("The first matrix is \n");

    for(i = 0; i < rows1; i++) {

        for(j = 0; j < cols1; j++) {

            printf("%d \t", matrix1[i][j]);
        }printf("\n");
    }

    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);

    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);

    int matrix2[rows2][cols2];

    printf("Enter the elements of the second matrix \n");

    for(i = 0; i < rows2; i++) {

        for(j = 0; j < cols2; j++) {

            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("The second matrix is \n");

    for(i = 0; i < rows2; i++) {

        for(j = 0; j < cols2; j++) {

            printf("%d \t", matrix2[i][j]);
        }printf("\n");
    }

    if(cols1 != rows2) {

        printf("Matrix multiplication is not possible \n");
    }else {

    int result[i][j];

    for(i = 0; i < rows1; i++) {

        for(j = 0; j < cols2; j++) {

            result[i][j] = 0;

            for(k = 0; k < cols1; k++) {

                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("The product of matrix 1 and matrix 2 is \n");

    for(i = 0; i < rows1; i++) {

        for(j = 0; j < cols2; j++) {

            printf("%d \t", result[i][j]);
        }printf("\n");
    }
}

    return 0;
}