
/*
2. Find maximum and minimum value from array.

Output:
Enter size: 5
Enter elements: 10 50 20 5 40
Maximum = 50
Minimum = 5
*/

#include <stdio.h>

int main()
{
    int a[100], n, i, max, min;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }

        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}
