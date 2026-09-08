/* Question: Print odd numbers between 1 to N. */

#include <stdio.h>

int main()
{
    int i = 1, n;

    printf("Enter N: ");
    scanf("%d", &n);

    while(i <= n)
    {
        if(i % 2 != 0)
        {
            printf("%d ", i);
        }

        i++;
    }

    return 0;
}
