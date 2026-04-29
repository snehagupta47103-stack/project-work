#include<stdio.h>

int main()
{
	char str[100];
	int i,j,count;
	
	printf("enter any string");
	scanf("%s", str);
	
	for(i = 0; str[i]!='\0'; i++){
		count = 1;
		for(j = i+1; str[j]!='\0';j++){
			if(str[i]==str[j]){
				count++;
			}
		}
		for(j = 0; j<i; j++){
			if(str[i]==str[j]){
				break;
			}
		}
		if(j==i){
			printf("%c = %d\n",str[i],count);
		}
	}
}
/*
output :-
enter any string snehagupta
s = 1
n = 1
e = 1
h = 1
a = 2
g = 1
u = 1
p = 1
t = 1
*/
