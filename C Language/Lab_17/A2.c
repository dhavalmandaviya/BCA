
/*
2. Get 10 numbers from user and print count
of odd and even numbers using while loop.

Output:
Enter 10 numbers:
1 2 3 4 5 6 7 8 9 10
Even count = 5
Odd count = 5
*/

#include <stdio.h>

int main()
{
    int n, i = 1;
    int even = 0, odd = 0;

    printf("Enter 10 numbers:\n");

    while(i <= 10)
    {
        scanf("%d", &n);

        if(n % 2 == 0)
            even++;
        else
            odd++;

        i++;
    }

    printf("Even count = %d\n", even);
    printf("Odd count = %d", odd);

    return 0;
}
