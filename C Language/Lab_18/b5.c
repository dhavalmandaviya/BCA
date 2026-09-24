/*
 5. Check whether the given number is perfect or not. (B) 
*/
#include <stdio.h>
int main() {
int i=1,n,sum=0;
printf("Enter the num :");
scanf("%d",&n);

while(i<n) {
	if(n%i==0) {
		sum=sum+i;
	}
	i++;
}
if(sum==n) {
	printf("Perfect");
}
else {
	printf("Not perfect");
}
}
