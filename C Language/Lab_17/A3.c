
/*
3. Print all integers greater than 100 and less than 200
that are divisible by 7 but not divisible by 5.

Output:
105 is excluded because it is divisible by 5.
112 119 126 133 147 ...
*/

#include <stdio.h>

int main()
{
    int i = 101;

    while(i < 200)
    {
        if(i % 7 == 0 && i % 5 != 0)
            printf("%d ", i);

        i++;
    }

    return 0;
}
