/*
2. Count total number of negative elements in an array.

Output:
Enter size: 5
Enter elements: 10 -2 -5 7 -1
Total negative elements: 3
*/

#include <stdio.h>

int main()
{
    int a[100], n, i, count = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            count++;
        }
    }

    printf("Total negative elements: %d", count);

    return 0;
}
