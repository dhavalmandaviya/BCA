/*
4. Swap first element with last, second to second last
   and so on.

Output:
Enter size: 5
Enter elements: 10 20 30 40 50
Array after swapping: 50 40 30 20 10
*/

#include <stdio.h>

int main()
{
    int a[100], n, i, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    printf("Array after swapping: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
