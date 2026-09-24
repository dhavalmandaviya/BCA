#include <stdio.h>
int main() {
int i=2,n,flag = 0;
printf("Enter a num :");
scanf("%d",&n);
while(i<=n/2) {
	if(n%i==0) {
		flag=1;
		break;
	}
	i++;
}
if(flag==1){
printf("This is not prime number!");
}else{
printf("This is prime number!");	
}
}
