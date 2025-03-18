# include <stdio.h>

int main() {

int i, Numbers[50], n, sum = 0;

printf("Enter the limit: ");
scanf("%d", &n);

printf("Enter %d numbers \n", n);

for(i = 0; i < n; i++) {

	scanf("%d", &Numbers[i]);
}

printf("The Array is \n");

for(i = 0; i < n; i++) {

	printf("%d \t", Numbers[i]);
	sum += Numbers[i];
}

printf("\nThe average of the set of numbers in the array is: %.2f \n", (float) sum / n);

return 0;

}
