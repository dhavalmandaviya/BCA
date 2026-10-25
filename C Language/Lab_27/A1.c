
/*
1. Read values in two-dimensional array and print them in matrix form.

Output:
Enter rows and columns: 2 3
Enter elements:
1 2 3
4 5 6

Matrix:
1 2 3
4 5 6

*/

#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
