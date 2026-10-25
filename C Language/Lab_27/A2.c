
/*
2. Count number of positive, negative and zero elements
   from 3 X 3 matrix.

Output:
Enter 9 elements:
1 -2 0
4 0 -5
6 7 -1

Positive = 4
Negative = 3
Zero = 2
*/

#include <stdio.h>

int main()
{
    int a[3][3], i, j;
    int pos = 0, neg = 0, zero = 0;

    printf("Enter 9 elements:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);

            if(a[i][j] > 0)
                pos++;
            else if(a[i][j] < 0)
                neg++;
            else
                zero++;
        }
    }

    printf("Positive = %d\n", pos);
    printf("Negative = %d\n", neg);
    printf("Zero = %d", zero);

    return 0;
}
