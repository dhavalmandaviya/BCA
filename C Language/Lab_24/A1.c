/*
1. Question: Find Max, Min, Sum, Avg. of given numbers from an array.

Output:
Enter number of elements: 5
Enter elements: 10 20 30 40 50
Maximum = 50
Minimum = 10
Sum = 150
Average = 30.00

*/

#include <stdio.h>

int main()
{
    int a[100], n, i;
    int max, min, sum = 0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid size");
        return 0;
    }

    printf("Enter elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];

        sum = sum + a[i];
    }

    avg = (float)sum / n;

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}