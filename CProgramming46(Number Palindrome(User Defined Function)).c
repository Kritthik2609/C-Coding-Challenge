# include<stdio.h>

int num_palindrome(int num);

int main() {

int num, custom;

printf("Enter a number: ");
scanf("%d", &num);

custom = num_palindrome(num);

if(custom == 1) {

	printf("%d is a palindrome number \n", num);
}

else{

	printf("%d is not a palindrome number \n", num);
}

return 0;
}

int num_palindrome(int num) {

int remainder, orgNumber, revNumber;

orgNumber = num;
revNumber = 0;

while(num != 0) {

	remainder = num % 10;
	revNumber = revNumber * 10 + remainder;
	num = num / 10;
}

if (orgNumber == revNumber) {

	return 1;
}

else{

	return 0;
}

}
