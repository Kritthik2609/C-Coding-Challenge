# include<stdio.h>

int sum_elements_array(int arr[], int size);

int main() {

int i, size, custom;

printf("Number of elements to be entered: ");
scanf("%d", &size);

int arr[size];

printf("Enter %d elements \n", size);

for(i = 0; i < size; i++) {

	scanf("%d", &arr[i]);
	
}

printf("The elements are \n");

for(i = 0; i < size; i++) {

	printf("%d \t", arr[i]);
	
} printf("\n");

custom = sum_elements_array(arr, size);

printf("The sum of the elements in the array is: %d \n", custom);

return 0;

}

int sum_elements_array(int arr[], int size) {

	int i, sum = 0;
	
	for(i = 0; i < size; i++) {
		
		sum += arr[i];
	}
	
	return sum;
}
