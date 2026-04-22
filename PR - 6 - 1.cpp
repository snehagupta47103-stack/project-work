#include<stdio.h>

int main()
{
	char a[50], b[50];
	char c[] = "admin@gmail.com";
	char d[] = "123456";
	int i, j = 1, k = 1;
	
	printf("enter your email");
	scanf("%s", a);
	
	printf("enter your password");
	scanf("%s", b);
	
	for(i = 0; a[i] || c[i]; i++)
	{
		if(a[i] != c[i])
		{
			j = 0;
		}
	}
	
	for(i = 0; b[i] || d[i]; i++)
	{
		if(b[i] != d[i])
		{
			k = 0;
		}
	}
	
	if(j, k)
		printf("login successful");
	else
		printf("login failed. Invalid credentials");
}
/*
output :-
enter your emailsnehagupta@gmail.com
enter your passwordsneha@029
login failed. Invalid credentials
*/
