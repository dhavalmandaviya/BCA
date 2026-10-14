/* Find whether the given number is prime or not using flag */

#include <stdio.h>

int main()
{
    int n, i = 2, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2)
    {
        flag = 1;
    }

    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }

        i++;
    }

    if (flag == 0)
        printf("Prime number");
    else
        printf("Not a prime number");

    return 0;
}