/* Print digits of the given number */

#include <stdio.h>

int main()
{
    int n, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    printf("Digits in reverse order: ");

    do
    {
        digit = n % 10;
        printf("%d ", digit);
        n = n / 10;
    }
    while (n > 0);

    return 0;
}