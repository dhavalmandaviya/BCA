/* LAB - 12
   1. Perform Addition, Subtraction, Multiplication and Division
   according to user's choice
*/

#include <stdio.h>

int main()
{
    float a, b, result;
    char choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &choice);

    if (choice == '+')
        result = a + b;
    else if (choice == '-')
        result = a - b;
    else if (choice == '*')
        result = a * b;
    else if (choice == '/')
    {
        if (b != 0)
            result = a / b;
        else
        {
            printf("Division by zero is not possible.");
            return 0;
        }
    }
    else
    {
        printf("Invalid choice.");
        return 0;
    }

    printf("Result = %.2f", result);

    return 0;
}
