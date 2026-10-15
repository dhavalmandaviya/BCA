/* Calculate average, geometric mean and harmonic mean of n elements in an array */

#include <stdio.h>
#include <math.h>

int main()
{
    int a[100], n, i;
    float sum = 0, product = 1;
    float avg, gm, hm, reciprocalSum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of elements.");
        return 0;
    }

    printf("Enter positive array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] <= 0)
        {
            printf("Please enter only positive numbers.");
            return 0;
        }

        sum = sum + a[i];
        product = product * a[i];
        reciprocalSum = reciprocalSum + 1.0 / a[i];
    }

    avg = sum / n;
    gm = pow(product, 1.0 / n);
    hm = n / reciprocalSum;

    printf("Average = %.2f\n", avg);
    printf("Geometric Mean = %.2f\n", gm);
    printf("Harmonic Mean = %.2f\n", hm);

    return 0;
}