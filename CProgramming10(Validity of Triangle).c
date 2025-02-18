#include<stdio.h>

int main(){

float angle1, angle2, angle3;

printf("Enter the value of angle A: ");
scanf("%f", &angle1);

printf("Enter the value of angle B: ");
scanf("%f", &angle2);

printf("Enter the value of angle C: ");
scanf("%f", &angle3);

if (angle1 + angle2 + angle3 == 180){

printf("The triangle is valid");
}
else {

printf("The triangle is not valid");
}

return 0;
}
