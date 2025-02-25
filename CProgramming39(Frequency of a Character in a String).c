# include <stdio.h>
#include <string.h>

int main() {

char str[100];
int i, j, length, count;

printf("Enter the first string: ");
scanf("%[^\n]", str);

length = strlen(str);

printf("The length of the string is: %d \n", length);

for(i = 0; i < length; i++) {

	count = 1;
	
	if(str[i] != '\0') {
	
		for(j = i + 1; j < length; j++) {
		
			if(str[i] == str[j]) {
			
				count++;
				str[j] = '\0';
			}
		}printf("%c: %d \n", str[i], count);
	} 
}

return 0;

}
