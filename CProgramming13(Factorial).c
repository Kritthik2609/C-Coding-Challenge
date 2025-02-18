#include<stdio.h>
int main(){

int num, f, i;

printf("Enter a number: ");
scanf("%d", &num);

f = 1;
i = num;

if (i >= 0) {

	while (i > 0) {

		f *= i;
		i--;
		
	    }
	 printf("Factorial of %d is: %d \n", num, f);
	 
    }
	 
else {

	printf("Invalid Entry");
	
}		    
    
   return 0;
   
  }  	
