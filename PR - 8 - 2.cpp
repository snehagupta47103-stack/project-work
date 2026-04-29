#include<stdio.h>

void cubeArray(int *ptr, int size){
	for(int i = 0; i < size; i++){
		*(ptr + i) = (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i));
	}
}
int main(){
	int n,j;
	printf("enter array's size: ");
	scanf("%d", &n);
	
	int arr[n][n];
	
	printf("enter array elements:\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	
	cubeArray(&arr[0][0], n * n);
	
	printf("\ncubes of all elements:\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
/*
output :-
enter array's size: 2
enter array elements:
a[0][0] = 1
a[0][1] = 2
a[1][0] = 3
a[1][1] = 4

cubes of all elements:
1 8
27 64

*/
	
