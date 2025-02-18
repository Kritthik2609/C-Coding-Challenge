#include<stdio.h>
int main() {

int num, remainder, orgNumber, revNumber;

printf("Enter a number: ");
scanf("%d", &num);

orgNumber = num;
revNumber = 0;

for ( ; num != 0; ) {

	remainder = num % 10;
	revNumber = revNumber * 10 + remainder;
	num /= 10;
	
    }
    
    printf("The reverse of %d is: %d \n", orgNumber, revNumber);
    
if (orgNumber == revNumber)

	printf("%d is a palindrome number \n", orgNumber);

else 

	printf("%d is not a palindrome number \n", orgNumber);
	
   return 0;
   
  }  	
