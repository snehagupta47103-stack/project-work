#include<stdio.h>

int main()
{
	int i, j;
	for(i = 1; i <= 5; i++){
		for(j = 1; j <= 5; j++){
	 		if(i == 1 || i == 3){
	 			printf("* ");
	        }
	        else if(i == 2){
	        	if(j == 1 || j == 5)
	        	printf("*    ");
	        	else
	        	printf(" ");
			}
			else{
				if(j == 1)
					printf("*");
				break;
			}
		}
		printf("\n");
	}
	return 0;
}
	