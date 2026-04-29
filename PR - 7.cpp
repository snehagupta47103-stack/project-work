#include<stdio.h>

int main()
{
	int choice;
	float a,b;
	
	while(1){
		printf("\n ---calculator---\n");
		printf("1. +\n");
		printf("2. -\n");
		printf("3. *\n");
		printf("4. /\n");
		printf("5. %%\n");
		printf("0. Exit\n");
		
		printf("enter your choice");
		scanf("%d", &choice);
		if(choice==0){
			printf("program ended\n");
		}
		printf("enter two numbers");
		scanf("%f %f", &a, &b);
		
		switch(choice){
			case 1:
				printf("Result = %f\n", a+b);
				break;	
			case 2:
				printf("Result = %f\n", a-b);
				break;
			case 3:
				printf("Result = %f\n", a*b);
				break;
			case 4:
				if(b==0)
				  printf("cannot divided by zero!\n");
				else
				  printf("Result = %f\n", a/b);
				  break;
			case 5:
				printf("Result = %d\n",(int)a % (int)b);
				break;
				
			default:
				printf("invalid choice!\n");
		}
	}
}
/*
output :-

 ---calculator---
1. +
2. -
3. *
4. /
5. %
0. Exit
enter your choice 1
enter two numbers2 3
Result = 5.000000

 ---calculator---
1. +
2. -
3. *
4. /
5. %
0. Exit
enter your choice 3
enter two numbers 6 8
Result = 48.000000

 ---calculator---
1. +
2. -
3. *
4. /
5. %
0. Exit
enter your choice 5
enter two numbers 3 9
Result = 3

 ---calculator---
1. +
2. -
3. *
4. /
5. %
0. Exit
enter your choice 2
enter two numbers 3 4
Result = -1.000000

 ---calculator---
1. +
2. -
3. *
4. /
5. %
0. Exit
enter your choice 4
enter two numbers 6 9
Result = 0.666667

 ---calculator---
1. +
2. -
3. *
4. /
5. %
0. Exit
enter your choice 0
program ended
enter two numbers4 7
invalid choice!

*/
