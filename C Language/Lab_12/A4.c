/* LAB - 12
   4. Input an integer number and check whether
   the last digit is even or odd
*/

#include <stdio.h>

int main()
{
    int n, lastDigit;

    printf("Enter an integer: ");
    scanf("%d", &n);

    lastDigit = n % 10;

    if (lastDigit < 0)
        lastDigit = -lastDigit;

    if (lastDigit % 2 == 0)
        printf("Last digit is Even");
    else
        printf("Last digit is Odd");

    return 0;
}
