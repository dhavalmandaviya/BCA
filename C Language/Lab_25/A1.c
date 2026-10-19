/*
1. Copy all elements of one array to another array.

Output:
Enter size: 5
Enter elements: 10 20 30 40 50
Copied array: 10 20 30 40 50
*/

#include <stdio.h>

int main()
{
    int a[100], b[100], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    printf("Copied array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
