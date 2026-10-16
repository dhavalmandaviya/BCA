/*
4. Question: Count total duplicate elements in an array.

Output:
Enter number of elements: 7
Enter elements: 10 20 10 30 20 10 40
Total duplicate elements = 3

*/

#include <stdio.h>

int main()
{
    int a[100], n, i, j;
    int count = 0;

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
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                break;
            }
        }
    }

    printf("Total duplicate elements = %d", count);

    return 0;
}