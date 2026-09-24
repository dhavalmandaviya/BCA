/*
2. Get 10 numbers from user print count of odd, even numbers.
*/
#include <stdio.h>
int main() {
	int i=1,n,count1=0,count2=0;
	do {
		printf("Enter a num :");
		scanf("%d",&n);
		if(n%2==0) {
			count1++;
		}
		else {
			count2++;
		}
		i++;
	}
	while(i<=10);
	printf("Odd: %d \nEven: %d",count2,count1);
}
