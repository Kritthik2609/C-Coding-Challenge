#include<stdio.h>

int main() {

FILE *file;
int ch;

file = fopen("Custom.txt", "w");

if(file == NULL) {

	printf("Error in creating the file! \n");
	return 1;
}

fprintf(file, "Hello World!!\n");
fprintf(file, "This is C Programming.\n");
fclose(file);

file = fopen("Custom.txt", "r");

if(file == NULL) {

	printf("Error in opening the file for reading!\n");
	return 1;
}

printf("Reading from the file: \n");

while((ch = fgetc(file)) != EOF) {

	putchar(ch);
}
fclose(file);

return 0;
}
