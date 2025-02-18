#include<stdio.h>

int main(){

int a = 5, b = 10;

printf("Before value of a was: %d\n", a);
printf("Before value of b was: %d\n", b);

int temporary = a;
a = b;
b = temporary;

printf("Now value of a is: %d\n", a);
printf("Now value of b is: %d\n", b);

return 0;
}
