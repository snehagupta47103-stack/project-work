#include<stdio.h>

int main()
{
	int a[3][3], transpose[3][3];
	int i,j;
	
	printf("original matrix\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			transpose [j][i] = a[i][j];
		}
	}
	
 	printf("transpose matrix\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", transpose [i][j]);
		}
	}
	
	printf("\n");
}
/*
output :-
original matrix
1 2 3
4 5 6
7 8 9
transpose matrix
1 4 7 
2 5 8 
3 6 9
*/
