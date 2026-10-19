/*
3. Count number of elements divisible by 3 in an array.

Output:
Enter size: 5
Enter elements: 3 10 12 7 15
Total elements divisible by 3: 3
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
        if(a[i] % 3 == 0)
        {
            count++;
        }
    }

    printf("Total elements divisible by 3: %d", count);

    return 0;
}
