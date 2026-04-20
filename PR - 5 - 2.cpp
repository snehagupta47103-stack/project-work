#include<stdio.h>

int main()
{
	int r, c, i, j;
	
	printf("enter number of rows");
	scanf("%d", &r);
	
	printf("enter number of columns");
	scanf("%d", &c);
	
	int a[r][c];
	
	printf("enter elements of the array\n");
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	int max = a[0][0];
	
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){
			if (a[i][j]>max){
				max = a[i][j];
			}
	    }
    }
    
    printf("the largest element is : %d\n", max);
	
}
/*
output :- 
enter number of rows3
enter number of columns3
enter elements of the array
1 2 3
4 5 6
7 8 9
the largest element is : 9
*/
