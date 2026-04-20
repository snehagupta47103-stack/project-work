#include<stdio.h>

int main()
{
	int n, i;
	
	printf("enter size of array");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("enter elements\n");
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("negative elements are");
	for(i = 0; i < n; i++){
		if(arr[i]<0){
			printf("%d", arr[i]);
		}
	}
}
/*
OUTPUT :-
enter size of array 10
enter elements
1 -2 -3
4 -6 -7
-8 -9 -5
10
negative elements are-2-3-6-7-8-9-5
*/
