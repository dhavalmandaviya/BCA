
/*
6. Find two largest elements in a one-dimensional array.

Output:
Enter size: 5
Enter elements: 10 50 30 20 40
Two largest elements: 50 and 40
*/

#include <stdio.h>

int main()
{
    int a[100], n, i, lar1, lar2;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    lar1 = a[0];
    lar2 = a[1];

    for(i = 1; i < n; i++)
    {
        if(a[i] > lar1)
        {
            lar2 = lar1;
            lar1 = a[i];
        }
        else if(a[i] > lar2)
        {
            lar2 = a[i];
        }
    }

    printf("Two largest elements: %d and %d", lar1, lar2);

    return 0;
}
