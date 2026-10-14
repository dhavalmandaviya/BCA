/* Check whether the given number is palindrome or not */

#include <stdio.h>

int main()
{
    int n, original, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    if (n < 0)
    {
        printf("Not a palindrome number");
        return 0;
    }

    do
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    while (n > 0);

    if (original == reverse)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}