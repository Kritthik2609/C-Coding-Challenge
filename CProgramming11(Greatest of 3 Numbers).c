#include<stdio.h>

int main(){

int a, b, c;

printf("Enter the value a: ");
scanf("%d", &a);

printf("Enter the value b: ");
scanf("%d", &b);

printf("Enter the value c: ");
scanf("%d", &c);

if (a > b){

	if (a > c)
	
		printf("%d is the largest number", a);
		
	else 
	
		printf("%d is the largest number", b);
	
	}
	
else {

	if (b > c) 
	
		printf("%d is the largest number", b);
		
	else
	
		printf("%d is the largest number", c);
		
     }
     
    return 0;
    
 }    						
