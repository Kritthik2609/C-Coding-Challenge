#include <stdio.h>
#include<string.h>

int main () {

int i, j, n;

printf("Number of names to be entered: ");
scanf("%d",&n);

char Names[n][20], temp[20];

printf("Enter %d names \n", n);

for(i = 0; i < n; i++) {

	scanf("%20s",Names[i]);
}

for(i = 0; i < n - 1; i++) {

	for(j = 0; j < n - i - 1; j++) {
	
		if(strcmp(Names[j],Names[j+1]) < 0) {
		
			strcpy(temp, Names[j]);
			strcpy(Names[j], Names[j + 1]);
			strcpy(Names[j + 1], temp);
		}
	}
}

printf("The reverse sorted order of the names is \n");

for(i = 0; i < n; i++) {

	printf("%s\n", Names[i]);
}

return 0;
}
