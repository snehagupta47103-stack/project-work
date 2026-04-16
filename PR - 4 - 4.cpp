#include<stdio.h>

int main()
{
	int i,j,sp;
	for(i = 5; i>=1; i--){
		for(sp = 5; sp>i; sp--){
			printf("  ");
		}
		for(j = 1; j<=i; j++){
			if(j % 2 == 1)
			printf("1 ");
		else
			printf("0 ");
		}
		printf("\n");
	}
}
/*
output :-
1 0 1 0 1
  1 0 1 0
    1 0 1
      1 0
        1
*/
