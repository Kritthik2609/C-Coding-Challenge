# include<stdio.h>

# define pi 3.14159

# define area_of_circle(r) (pi * r1 * r1)
# define surface_area_of_cylinder(r, h) (2 * pi * r2 * (r2 + h))

int main() {

float r1, r2, h, custom1, custom2;

printf("Enter the radius of circle: ");
scanf("%f", &r1);

printf("Enter the radius of cylinder: ");
scanf("%f", &r2);

printf("Enter the height of cylinder: ");
scanf("%f", &h);

custom1 = area_of_circle(r1);
custom2 = surface_area_of_cylinder(r, h);

printf("The area of the circle is: %.2f sq.units \n", custom1);
printf("The surface area of the cylinder is: %.2f sq.units \n", custom2);

return 0;
}
