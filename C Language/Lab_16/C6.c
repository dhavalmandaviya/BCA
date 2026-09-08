/* Question: Calculate the square of integers 1 through 10. */

#include <stdio.h>

int main()
{
    int i = 1, square;

    while(i <= 10)
    {
        square = i * i;
        printf("Square of %d = %d\n", i, square);
        i++;
    }

    return 0;
}
