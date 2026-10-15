/* Count numbers higher than the average of an array */

#include <stdio.h>

int main()
{
    int a[100], n, i, count = 0;
    int sum = 0;
    float avg;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of elements.");
        return 0;
    }

    avg = (float)sum / n;

    for (i = 0; i < n; i++)
    {
        if (a[i] > avg)
        {
            count++;
        }
    }

    printf("Average = %.2f\n", avg);
    printf("Numbers greater than average = %d", count);

    return 0;
}