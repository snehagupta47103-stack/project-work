#include<stdio.h>

int main()
{
	char ch[50];
	int i = 0, len = 0, l = 0, d = 0, s = 0;
	
	printf("enter your password");
	scanf("%s", ch);
	
	while(ch[i] != '\0')
	{
		len ++;
		if((ch[i]>='a' & ch[i]<='z') || (ch[i]>='A' & ch[i]<='Z'))
		  l++;
		else if(ch[i]>='0' & ch[i]<='9')
		  d++;
		else
		  s++;
		i++;
	}
	if(len>=6 & l>0 & d>0 & s>0)
		printf("your password is strong");
	else
		printf("not strong");
}