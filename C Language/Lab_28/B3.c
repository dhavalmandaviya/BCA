
/*
3. Read a matrix and print diagonal elements and their sum.

Output:
Diagonal elements: 1 5 9
Sum of diagonal elements = 15
*/

#include <stdio.h>

int main()
{
    int a[10][10], n, i, j, sum = 0;

    printf("Enter matrix size: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }

    printf("Diagonal elements: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i][i]);
        sum = sum + a[i][i];
    }

    printf("\nSum of diagonal elements = %d", sum);

    return 0;
}
