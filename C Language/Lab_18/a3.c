#include <stdio.h>
int main() {
int i=2,n;
printf("Enter a num :");
scanf("%d",&n);
while(i<=n/2) {
	if(n%i==0) {
		printf("This is not a prime num!");
		return;
	}
	i++;
}
printf("This is prime number!");
}
