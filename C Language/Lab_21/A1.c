/* Print 1 to 10, then modify the program to print 1 to N */

#include <stdio.h>

int main()
{
    int i, n;

    printf("Numbers from 1 to 10:\n");

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    printf("\n\nEnter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}