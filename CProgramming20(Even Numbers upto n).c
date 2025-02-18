#include<stdio.h>
int main() {

int n;

printf("Enter the limit: ");
scanf("%d", &n);

for (int num = 0; num <= n; num++) {

	if (num % 2 == 0) 
	
		printf("%d \n", num);
		
	}	
    return 0;
    
  }  
