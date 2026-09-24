/*
4. Print digits of given number. 
*/
#include <stdio.h>
int main() {
int num,digit;
printf("Enter a num :");
scanf("%d",&num);
while(num>0) {
	digit = num%10;
	printf("%d",digit);
	num=num/10;
}
}
