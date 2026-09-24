/*
 1. Find out sum of first and last digit of a given number.
*/
#include <stdio.h>
int main()
{
	int i=1,n,first,last;
	printf("Enter a number :");
	scanf("%d", &n);
	last=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	first=n;
	printf("%d", first+last);
}
