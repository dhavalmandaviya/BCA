/* Print a binary number pattern 

1
01
010
1010
10101

*/

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == 1 || i == 2)
            {
                printf("%d", (j + i) % 2);
            }
            else
            {
                printf("%d", (i + j) % 2);
            }
        }

        printf("\n");
    }

    return 0;
}