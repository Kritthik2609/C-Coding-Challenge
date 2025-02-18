#include<stdio.h>
int main() {

float cp, sp;

printf("Enter the cost price in rupees: ");
scanf("%f", &cp);

printf("Enter the selling price rupees: ");
scanf("%f", &sp);

if (cp < sp) {

	printf("Your profit in rupees is: %.2f", sp - cp);
	
    }
    
else if (cp == sp) {

	printf("Neither profit nor loss");
	
    }
    
else {

	printf("Your loss in rupees is: %.2f", cp - sp);
	
    }
    
  return 0;
  
  }  	    	
	
	    	
