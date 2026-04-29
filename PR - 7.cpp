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