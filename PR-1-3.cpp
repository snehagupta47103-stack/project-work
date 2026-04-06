#include<stdio.h>

int main()
{
	int  angle1, angle2, angle3;
	
	printf("enter value of angle1");
	scanf("%d", &angle1);
	
	printf("enter value of angle2");
	scanf("%d", &angle2);
	
	angle3 = 180 - (angle1 + angle2);
	
	printf("angle3 = %d\n", angle3);
}
/*
output :- enter value of angle165
enter value of angle245
angle3 = 70
*/
