
/*
4. Check whether a given matrix is a sparse matrix or not.

Output:
Matrix is a sparse matrix.
*/

#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;
    int zero = 0, nonzero = 0;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);

            if(a[i][j] == 0)
                zero++;
            else
                nonzero++;
        }
    }

    if(zero > nonzero)
        printf("Matrix is a sparse matrix.");
    else
        printf("Matrix is not a sparse matrix.");

    return 0;
}
