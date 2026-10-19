
/*
1. Search element in array.

Output:
Enter size: 5
Enter elements: 10 20 30 40 50
Enter element to search: 30
Element found at position 3
*/

#include <stdio.h>

int main()
{
    int a[100], n, i, search, found = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("Element found at position %d", i + 1);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}
