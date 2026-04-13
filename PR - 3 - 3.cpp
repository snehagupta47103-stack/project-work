#include<stdio.h>

int main()
{
	int i , first, last;
	printf("enter any number:");
	scanf("%d", &i);
	last=i % 10;
	
	while (i >= 10)
	{
		i = i/10;
		
	}
		first = i;
		printf("sum of the first and last digit: %d",first + last);
}