
/*
5. Reverse elements of an array without using a second array.

Output:
Enter size: 5
Enter elements: 10 20 30 40 50
Reversed array: 50 40 30 20 10
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
  
    printf("\nReverse order: ");

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
