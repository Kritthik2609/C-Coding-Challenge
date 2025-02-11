# include<stdio.h>
int main(){

int i, n;

printf("Number of elements to be entered: ");
scanf("%d", &n);

printf("Enter %d elements \n", n);

int arr[n];

for(i = 0; i < n; i++){

	scanf("%d", &arr[i]);
}

printf("The reversed order is \n");

for(i = n-1; i >= 0; i--){

	printf("%d \n", arr[i]);
}	
return 0;
}

