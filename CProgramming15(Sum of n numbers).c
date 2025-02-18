#include <stdio.h>
int main() {

int n, sum;

printf("Enter the limit: ");
scanf("%d", &n);

sum = 0;

for (int i = 1; i <= n; i++) {

	sum += i;

    }
    
    printf("Sum of natural numbers upto %d is: %d", n, sum);
    
   return 0;
   
  }  	
