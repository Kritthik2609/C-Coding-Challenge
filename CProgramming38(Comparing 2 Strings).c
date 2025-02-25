# include <stdio.h>
#include <string.h>

int main() {

char str1[100], str2[100], temp;
int i, j;

printf("Enter the first string: ");
scanf("%[^\n]", str1);

getchar();

printf("Enter the second string: ");
scanf("%[^\n]", str2);

if(strcmp(str1, str2) == 0) {

	printf("The two strings are same");
}else {

	printf("The two strings are different \n");
}

return 0;

}
