/*
4. Read 3 numbers, multiply largest number from first two numbers to third one using switch.
*/

#include <stdio.h>

int main()
{
    int a, b, c, largest, result;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    switch(a > b)
    {
        case 1:
            largest = a;
            break;

        case 0:
            largest = b;
            break;
    }

    result = largest * c;

    printf("Largest of first two numbers = %d\n", largest);
    printf("Result = %d", result);

    return 0;
}
