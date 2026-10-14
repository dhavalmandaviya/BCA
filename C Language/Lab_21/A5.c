/* Find the factorial of the given number */

#include <stdio.h>

int main()
{
    int n, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.");
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %lld", fact);

    return 0;
}