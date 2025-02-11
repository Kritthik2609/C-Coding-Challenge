# include <stdio.h>
int main() {

int i, n , key, count = 0;

printf("Number of elements to be entered: ");
scanf("%d", &n);

printf("Enter %d elements \n", n);

int arr[n];

for(i = 0; i < n; i++){

	scanf("%d", &arr[i]);
}

printf("Enter a key: ");
scanf("%d", &key);

for(i = 0; i < n; i++){

	if(arr[i] == key){
	
		count++;
	}
}

printf("The key %d is repeated %d times in the array \n", key, count);

return 0;
}
