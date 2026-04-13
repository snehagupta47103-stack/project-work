#include<stdio.h>

int main()
{
	int i , a = 0;
	printf("enter any number:");
	scanf("%d", &i);
	
	while (i != 0)
	{
		i = i/10;
		a++;
	}
		printf("total number of digits : %d",a);
}