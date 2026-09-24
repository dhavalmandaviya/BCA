/*

Extra => Check whether number is divisble by their digit sum so the number is Harsad number or not!

Example :- 
18 is Harsad
81 is Harsad
19 is Not Harsad

*/
#include <stdio.h>
int main() {
	int n,sum=0,digit=0,temp;
	printf("Enter n :");
	scanf("%d",&n);
	temp=n;
	while (temp!=0) {
		digit = temp%10;
		sum = sum + digit;
		temp=temp/10;
	}
	if(n%sum==0) {
		printf("This is Harsad");
	}
	else {
		printf("This is Not Harsad");
	}
}
