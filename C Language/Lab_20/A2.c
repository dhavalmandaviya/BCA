/* Find the sum and average of different numbers accepted by the user */

#include <stdio.h>

int main()
{
    int n, count = 0;
    float num, sum = 0, avg;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    while (count < n)
    {
        printf("Enter a number: ");
        scanf("%f", &num);

        sum = sum + num;
        count++;
    }

    if (n > 0)
    {
        avg = sum / n;

        printf("Sum = %.2f\n", sum);
        printf("Average = %.2f", avg);
    }
    else
    {
        printf("Please enter a positive count.");
    }

    return 0;
}