#include<stdio.h>
int main() {

int num;

printf("Enter a number: ");
scanf("%d", &num);

int isPrime = 1;

	for (int i = 2; i < num; i++) {
	
		if (num % i == 0) {
		
		isPrime = 0;
		break;
	
	}
    }
    
if (isPrime == 1) 

	printf("%d is a prime number", num);
	
else 

	printf("%d is not a prime number", num);
	
    return 0;
    
 }   		
	
	    		
