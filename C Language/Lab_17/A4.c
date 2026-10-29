
/*
4. Print multiplication table of a given number.

Output:
Enter number: 5
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
...
5 x 10 = 50
*/

#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    while(i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }

    return 0;
}
