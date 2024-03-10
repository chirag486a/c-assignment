#include <stdio.h> 

/* Iterative function to reverse digits of num*/
int reverseDigits(int num) 
{ 
	int rev_num = 0; 
	while (num > 0) { 
		rev_num = rev_num * 10 + num % 10; 
		num = num / 10; 
	} 
	return rev_num; 
} 

/*Driver program to test reverseDigits*/
int main() 
{ 
	printf("Enter a palindrome number:\n");
	int a;
	scanf("%d", &a);
	int rev = reverseDigits(a);
	if(rev == a) printf("Yes! number is palindrome");
	if(rev != a) printf("That was not palindrome number");
	return 0;
}

