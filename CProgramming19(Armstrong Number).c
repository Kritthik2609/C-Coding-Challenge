#include<stdio.h>
int main() {

int num, remainder, orgNumber, armstrongNumber;

printf("Enter a number: ");
scanf("%d", &num);

orgNumber = num;
armstrongNumber = 0;

for ( ; num != 0; ) {

	remainder = num % 10;
	armstrongNumber = armstrongNumber + (remainder * remainder * remainder);
	num /= 10;
	
    }
    
    printf("The armstrong value of %d is: %d \n", orgNumber, armstrongNumber);
    
if (orgNumber == armstrongNumber)

	printf("%d is an armstrong number \n", orgNumber);
	
else 

	printf("%d is not an armstrong number \n", orgNumber);
	
   return 0;
   
  }	
