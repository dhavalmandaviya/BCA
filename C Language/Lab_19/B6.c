/*
6. Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + n.
*/
#include <stdio.h>
int main() {
	int i=1,n,sum=0;
	printf("Enter n :");
	scanf("%d",&n);
	do {
		sum=sum+(i*i);
		i++;
	}
	while(i<=n);
	printf("sum = %d",sum);
}
