#include<stdio.h>

int main(){

int a, b;

printf("Enter the value of a: ");
scanf("%d", &a);

printf("Enter the value of b: ");
scanf("%d", &b);

(a > b)? printf("%d is greater than %d", a, b): printf("%d is greater than %d", b, a);

return 0; 
}
