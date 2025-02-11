# include <stdio.h>
int main() {

int i, n ,max, min, max_pos, min_pos;

printf("Number of elements to be entered: ");
scanf("%d", &n);

printf("Enter %d elements \n", n);

int arr[n];

for(i = 0; i < n; i++){

	scanf("%d", &arr[i]);
}

max = min = arr[0];

for(i = 0; i < n; i++){

	if(arr[i] >= max){
	
		max = arr[i];
		max_pos = i;
	}
	if(arr[i] <= min){
	
		min = arr[i];
		min_pos = i;
	}
}

printf("The maximum value is %d and its position is %d \n", max, max_pos);
printf("The minimum value is %d and its position is %d \n", min, min_pos);

return 0;
}
					
