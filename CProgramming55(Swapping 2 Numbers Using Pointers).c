#include<stdio.h>

void NumSwap(int *num1, int *num2) {

int temp = *num1;
*num1 = *num2;
*num2 = temp;

}

int main() {

int num1, num2, *ptr1, *ptr2;

printf("Enter the value of first number: ");
scanf("%d", &num1);

printf("Enter the value of second number: ");
scanf("%d", &num2);

printf("\nBefore Swapping: num1 = %d and num2 = %d \n", num1, num2);

NumSwap(&num1, &num2);

printf("After Swapping: num1 = %d and num2 = %d \n", num1, num2);

return 0;
}
