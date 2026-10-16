/*
5. Question: Find missing numbers of a sequence using an array.

Output:
Enter number of elements: 7
Enter elements: 1 2 4 5 7 8 10
Missing numbers: 3 6 9

*/

#include <stdio.h>

int main()
{
    int a[100], n, i, j;
    int found, max = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid size");
        return 0;
    }

    printf("Enter elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] > max)
        {
            max = a[i];
        }
    }

    printf("Missing numbers: ");

    for (i = 1; i <= max; i++)
    {
        found = 0;

        for (j = 0; j < n; j++)
        {
            if (a[j] == i)
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}