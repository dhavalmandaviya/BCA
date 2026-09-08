/*
 4. Check whether number is even number or odd number using conditional operator. 
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    (n % 2 == 0) ? printf("Number is Even") : printf("Number is Odd");

    return 0;
}
