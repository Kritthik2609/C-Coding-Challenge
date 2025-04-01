# include <stdio.h>

struct Employees {

char Name[50];
int ID;
float Salary;
};

int main() {

int i, n;

printf("Number of Employee details to be entered: ");
scanf("%d", &n);

struct Employees employee[n];

for(i = 0; i < n; i++) {

	printf("Enter the details for Employee %d \n", i + 1);
	
	printf("Name: ");
	scanf("%s",employee[i].Name);
	
	printf("ID: ");
	scanf("%d",&employee[i].ID);
	
	printf("Salary(in INR): ");
	scanf("%f",&employee[i].Salary);
	
	printf("\n");
}

printf("Displaying Employee Information \n");

for(i = 0; i < n; i++) {

	printf("Employee: %d \n", i + 1);
	
	printf("Name: %s \n", employee[i].Name);
	printf("ID: %d \n", employee[i].ID);
	printf("Salary(in INR): %.2f \n", employee[i].Salary);
}

return 0;
}
