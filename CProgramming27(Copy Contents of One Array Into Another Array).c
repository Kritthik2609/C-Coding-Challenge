# include <stdio.h>
int main() {

int i, n , key, count = 0;

printf("Number of elements to be entered: ");
scanf("%d", &n);

printf("Enter %d elements \n", n);

int arr1[n];

for(i = 0; i < n; i++){

	scanf("%d", &arr1[i]);
}

int arr2[n];

printf("The array to which the elements are copied is \n");

for(i = 0; i < n; i++){

	arr2[i] = arr1[i];
	printf("%d \n", arr2[i]);
}

return 0;
}	
	
