#include<stdio.h>

int main()
{
	char ch = 'A';
	do {
		printf("%c\n",ch);
		ch += 4;
	}
		while (ch <= 'Z');
}