#include<stdio.h>

int main()
{
	int i,j,a=11;
	int rows = 4;
	
	
	for(int i = 1; i<=rows;i++){
		for(int j = 1; j<=i; j++){
			printf("%d ",a);
			a+=1;
		}
		printf("\n");
	}
}