#include <stdio.h>
int main() {
int n,count=0;
float sum=0,avg;
char ch;
ch='y';
while(ch=='y' || ch=='Y')
{
	printf("Enter the num :");
	scanf("%d\n",&n);	
	sum=sum+n;
	count++;
	printf("Enter the other num y/n :");
	scanf("%c",&ch);
	
}
avg=sum/count;
printf("Sum = %f \n Avg=%f",sum,avg);
return 0;
}
