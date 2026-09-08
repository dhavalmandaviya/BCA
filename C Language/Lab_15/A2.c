/*
2. Check whether given number is positive or negative using conditional operator.
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    (n >= 0) ? printf("Number is Positive") : printf("Number is Negative");

    return 0;
}
