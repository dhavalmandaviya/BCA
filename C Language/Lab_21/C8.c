/* Count frequency of digits in an integer */

#include <stdio.h>

int main()
{
    int n, digit, i;
    int count[10] = {0};

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    if (n == 0)
    {
        count[0] = 1;
    }

    while (n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (count[i] > 0)
        {
            printf("Digit %d occurs %d time(s)\n", i, count[i]);
        }
    }

    return 0;
}