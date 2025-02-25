# include <stdio.h>
#include <string.h>

int main() {

char str[100];
int i, j, length, v_count = 0;

printf("Enter the string: ");
scanf("%[^\n]", str);

length = strlen(str);

printf("The length of the string is: %d \n", length);

char vowel[] = "aeiouAEIOU";

for(i = 0; i < length; i++) {

	for(j = 0; j < sizeof(vowel); j++) {
	
		if(str[i] == vowel[j]) {
		
			v_count++;
		}
	}
}

printf("The number of vowels in the string is: %d \n", v_count);
printf("The number of consonants in the string is: %d \n", length - v_count);

return 0;

}
