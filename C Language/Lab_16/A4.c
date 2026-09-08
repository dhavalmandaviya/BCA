/* Question: Print numbers between two given numbers which is divisible by 2. */

#include <stdio.h>

int main()
{
    int a,b,i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    i = a;

    while(i <= b)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }

        i++;
    }

    return 0;
}
