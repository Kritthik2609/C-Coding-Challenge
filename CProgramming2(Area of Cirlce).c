#include<stdio.h>

int main(){

float radius;

const float Pi = 3.14;
printf("Enter the length of the radius: ");
scanf("%f", &radius);

printf("Area of the circle is: %f", Pi * radius * radius);

return 0;
}
