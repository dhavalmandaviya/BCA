/* Calculate X^Y without using power function */

#include <stdio.h>

int main()
{
    int x, y, i;
    int result = 1;

    printf("Enter the base X: ");
    scanf("%d", &x);

    printf("Enter the power Y: ");
    scanf("%d", &y);

    if (y < 0)
    {
        printf("Please enter a non-negative power.");
        return 0;
    }

    for (i = 1; i <= y; i++)
    {
        result = result * x;
    }

    printf("Result = %d", result);

    return 0;
}