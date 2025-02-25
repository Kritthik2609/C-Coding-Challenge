# include <stdio.h>
int main() {

char str[100], temp;
int i, j, length;

printf("Enter the string: ");
scanf("%[^\n]", str);

for(length = 0; str[length] != '\0'; length++);

printf("Length of the string is: %d \n", length);

i = length - 1;

for(j = 0; j < length/2; j++, i--) {

	temp = str[i];
	str[i] = str[j];
	str[j] = temp;
}

printf("The reverse of the string is: %s \n", str);

return 0;
}
