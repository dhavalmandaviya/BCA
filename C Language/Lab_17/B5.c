
/*
5. Print first 50 numbers in series 1, 4, 7, 10...

Output:
1 4 7 10 13 16 19 22 25 28 ...
*/

#include <stdio.h>

int main()
{
    int i = 1, count = 1;

    while(count <= 50)
    {
        printf("%d ", i);
        i = i + 3;
        count++;
    }

    return 0;
}
