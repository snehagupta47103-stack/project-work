#include<stdio.h>

int main()
{
	char str[100];
	int i, length = 0;
	int isPalindrome = 1;
	
	printf("enter any string\n");
	scanf("%s", str);
	
	while(str[length] != '\0'){
		length++;
	}
	
	for(i = 0; i < length/2; i++){
		if(str[i] != str[length - i - 1]){
			isPalindrome = 0;
			break;
		}
	}
	
	if(isPalindrome)
	printf("the given string is a Palindrome\n");
	else
	printf("the given string is NOT a Palindrome\n");
}
/*
output :-
enter any string
Sneha Gupta
the given string is NOT a Palindrome
*/
