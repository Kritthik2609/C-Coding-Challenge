#include<stdio.h>

int main() {

int num = 5;
int *a, **b;

a = &num;
b = &a;

printf("Value of num is: %d \n", num);
printf("Value of *a is: %d \n", *a);
printf("Value of **b is: %d \n", **b);

**b += 5;

printf("\nAfter changing the value of **b  \n");

printf("\nValue of num is: %d \n", num);
printf("Value of *a is: %d \n", *a);
printf("Value of **b is: %d \n", **b);

return 0;

}


