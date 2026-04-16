#include<stdio.h>

int main()
{
	int i, j, k, sp;
 	for(i = 5; i >= 1; i--){
 		for(sp = 1; sp < i; sp++){
 			printf("  ");
		 }
		 for(j = i; j <= 5; j++){
		 	printf("%d ", j);
		 }
		 for(k = 4; k >= i; k--){
		 	printf("%d ", k);
		 }
		 printf("\n");
	 }
}
/*
output :-
        5
      4 5 4
    3 4 5 4 3
  2 3 4 5 4 3 2
1 2 3 4 5 4 3 2 1
*/
