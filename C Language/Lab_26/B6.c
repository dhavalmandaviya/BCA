/*
5. Insert new value in the sorted array.

Output:
Enter size: 5
Enter sorted elements: 10 20 30 40 50
Enter value to insert: 35
Array after insertion: 10 20 30 35 40 50
*/

#include <stdio.h>

int main()
{
    int a[100], n, i, value, j;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter value to insert: ");
    scanf("%d", &value);

    i = n - 1;

    while(i >= 0 && a[i] > value)
    {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = value;
    n++;

    printf("Array after insertion: ");
    for(j = 0; j < n; j++)
    {
        printf("%d ", a[j]);
    }

    return 0;
}
