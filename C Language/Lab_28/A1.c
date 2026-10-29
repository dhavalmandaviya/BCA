
/*
1. Count number of odd and even elements from N x N matrix.

Output:
Even elements = 2
Odd elements = 2
*/

#include <stdio.h>

int main()
{
    int a[10][10], n, i, j;
    int even = 0, odd = 0;

    printf("Enter matrix size: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] % 2 == 0)
                even++;
            else
                odd++;
        }
    }

    printf("Even elements = %d\n", even);
    printf("Odd elements = %d\n", odd);

    return 0;
}
