/*
4. Print multiplication table of a given number
*/
#include <stdio.h>
int main() {
	int i=1,n,table;
	printf("Enter a num :");
	scanf("%d",&n);
	do {
		table = n*i;
		printf("%d * %d = %d\n",n,i,table);
		i++;
	}
	while(i<=10);
}
