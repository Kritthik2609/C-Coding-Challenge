# include<stdio.h>

int fact(int num);

int main() {
	
int num, custom;

printf("Enter a number: ");
scanf("%d", &num);

custom = fact(num);

printf("The factorial of %d is: %d \n", num, custom);

return 0;
}

int fact(int num) {

int i, f = 1;

for(i = num; i >= 1; i--) {

	f = f * i;
}

return f;
}
