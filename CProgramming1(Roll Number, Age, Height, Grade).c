#include<stdio.h>

int main(){

int roll_number, age;
float height;
char grade;

printf("Enter the roll number: ");
scanf("%d", &roll_number);

printf("Enter the age: ");
scanf("%d", &age);

printf("Enter the height: ");
scanf("%f", &height);

printf("Enter the grade: ");
scanf(" %c", &grade);

printf("The roll number of the student is: %d \nThe age of the student is: %d \n", roll_number, age);
printf("The height of the student is (in cm): %f \nThe grade of the student is: %c", height, grade);
return 0;
}
