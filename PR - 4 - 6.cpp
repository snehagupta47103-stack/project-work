#include<stdio.h>

int main()
{
	int i, j, sp, n=5;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
	 		printf("%d ",j);
	    }
	    for(sp = 1; sp<=2 * (n - i);sp++){
	    	printf("  ");
		}
		for(j = i; j>=1; j--){
			printf("%d ",j);
	    }			
	    printf("\n");
	}
	
}
