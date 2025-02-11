# include <stdio.h>
int main() {

int i, n , key, flag = 0;

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
	
		printf("The key %d is found at position %d \n", key, i);
		flag = 1;
		break;
	}
}

if(!flag){

	printf("The key %d is not found in the array \n", key);
}

return 0;
}			
