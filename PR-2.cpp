#include<stdio.h>

int main()
{
	int marks;
	char grade;
	
	printf("enter your score (0-100):");
	scanf("%d\n",&marks);
	 
	grade = (marks >= 90) ?'A':
		    (marks >= 70) ?'B':
		    (marks >= 50) ?'C':
			(marks >= 35) ?'D':'F';
			
	printf("\nyour grade is %c" , grade);


switch(grade) {
	case 'A':
		printf("Excellent Work");
		break;
	case 'B':
		printf("Well Done");
		break;
	case 'C':
		printf("Good Job");
		break;
	case 'D':
		printf("You passed but you could do better");
		break;
	case 'F':
		printf("You Failed");
		break;	
}

if(grade >= 'A' && grade <= 'D'){
		printf("\nYou are eligible for next level.");
}else{
		printf("\nPlease try again next exam.");
    }
return 0;
}

/*
output :- enter your score (0-100):99
your grade is A
Excellent work
You are eligible for next level.
*/
