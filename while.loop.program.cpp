#include<stdio.h>

int main()
{
	int a;
	a = 70;
	while(a>=50){
		printf("%d Hello\n", a);
		a = a - 2;
	}
	printf("\nvalue of a: %d",a);
}
/*
output:-70 Hello
68 Hello
66 Hello
64 Hello
62 Hello
60 Hello
58 Hello
56 Hello
54 Hello
52 Hello
50 Hello
*/
