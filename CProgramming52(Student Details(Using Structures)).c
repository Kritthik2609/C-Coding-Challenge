# include<stdio.h>

struct Students {

char Name[50];
int Roll_Number;
float Marks[3];
float Total;
float Average;
};

int main() {

int i, j, n;

printf("Number of Student details to be entered: ");
scanf("%d", &n);

struct Students student[n];

for(i = 0; i < n; i++) {

	printf("Enter the details for student %d \n", i + 1);
	
	printf("Name: ");
	scanf("%s", student[i].Name);
	
	printf("Roll Number: ");
	scanf("%d", &student[i].Roll_Number);
	
	student[i].Total = 0;
	
	printf("Enter the marks of 3 subjects \n");
	
	for(j = 0; j < 3; j++) {
	
		scanf("%f", &student[i].Marks[j]);
		student[i].Total += student[i].Marks[j];
	}
    student[i].Average = student[i].Total / 3.0;
    printf("\n");
}

  printf("Displaying Student Information \n");

for(i = 0; i < n; i++) {

	printf("\nStudent: %d \n", i + 1);
	
	printf("Name: %s \n", student[i].Name);
	printf("Roll Number: %d \n", student[i].Roll_Number);
	printf("Total Marks: %.2f \n", student[i].Total);
	printf("Average Marks: %.2f \n", student[i].Average);
}

return 0;
}
