#include <stdio.h>

int main() {

    int n, lim, i, j, result;
    
    printf("Enter the number upto which the multiplication tables should be printed: ");
    scanf("%d", &n);

    printf("Enter the limit upto which the number should be multiplied: ");
    scanf("%d", &lim);

    for(i = 1; i <= n; i++) {

        printf("The multiplication table of %d is \n \n", i);

        for(j = 1; j <= lim; j++) {

            result = i * j;

            printf("%d * %d = %d \n \n", i, j, result);
        }
    }

    return 0;
}  	