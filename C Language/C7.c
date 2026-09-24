/* 
8. Check whether the given number is Armstrong or not.
*/
#include <stdio.h>
#include <math.h>
int main() {
	int i=1,n,a,b=0,digit = 0;
	printf("Enter a n :");
	scanf("%d",&n);
	a=n;
	while(a!=0) {
		digit++;
		a /= 10;
	}
	a=n;
	while(a!=0) {
		int rem = a%10;
		b += pow(rem,digit);
		a/=10;
	}
	if(b==n) {
		printf("Armstong !");
	}
	else {
		printf("Not Armstong !");
	}
}
