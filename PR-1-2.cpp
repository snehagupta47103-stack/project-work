#include<stdio.h>

int main()
{
	int base_salary, HRA, DA, TA, gross_salary;
	
	printf("enter value of base_salary");
	scanf("%d",&base_salary);
	
	printf("enter value of HRA");
	scanf("%d",&HRA);
	
	printf("enter value of TA");
	scanf("%d",&TA);
	
	printf("enter value of DA");
	scanf("%d",&DA);
	
	gross_salary = base_salary + HRA + DA + TA; 
	
	printf("gross_salary = %d\n", gross_salary);
}
/*
output:-
enter value of base_salary100
enter value of HRA10
enter value of TA5
enter value of DA8
gross_salary = 123


*/
