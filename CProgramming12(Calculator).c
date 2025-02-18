#include<stdio.h>
int main(){

int num1, num2;
char ch;

printf("Enter the value of first number: ");
scanf("%d", &num1);

printf("Enter the value of second number: ");
scanf("%d", &num2);

printf("Choose the mode of operation: ");
scanf(" %c", &ch);

switch (ch) {

	case '+': printf("Sum is: %d", num1 + num2);
		break;
		
	case '-': printf("Difference is: %d", num1 - num2);
		break;
		
	case '*': printf("Product is: %d", num1 * num2);
		break;
		
	case '/': if (num2 == 0) 
			
			printf("Division is not possible");
			
		  else 
		  
		  	printf("Quotient is: %.2f", (float)num1 / num2);
		  	
		break;
		
	case '%': printf("Remainder is %d", num1 % num2);
		break;
		
	default: printf("Invalid Operator");
	
    }
    
    return 0;
 
 }   			  			
