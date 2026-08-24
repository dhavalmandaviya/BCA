/* LAB - 11
   2. Check whether given number is positive or negative
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)
        printf("Positive number");
    else if (n < 0)
        printf("Negative number");
    else
        printf("Zero");

    return 0;
}
