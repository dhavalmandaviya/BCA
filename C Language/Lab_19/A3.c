/*
3. Print all integer greater than 100 and less than 200 that are divisible by 7 but not divisible by 5. 
*/
#include <stdio.h>
int main() {
	int i=100;
	do {
		if(i%7==0 && i%5!=0) {
			printf("%d \n",i);
		}
		i++;
	}
	while(i<=200);
}
