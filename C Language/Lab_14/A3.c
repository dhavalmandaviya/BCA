/*
3. Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice using switch.
*/

#include <stdio.h>

int main()
{
    float num1, num2, result;
    char choice;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\nEnter your choice:\n");
    printf("+ : Addition\n");
    printf("- : Subtraction\n");
    printf("* : Multiplication\n");
    printf("/ : Division\n");

    printf("Enter choice: ");
    scanf(" %c", &choice);

    switch(choice)
    {
        case '+':
            result = num1 + num2;
            printf("Addition = %.2f", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Subtraction = %.2f", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Multiplication = %.2f", result);
            break;

        case '/':
            if(num2 != 0)
            {
                result = num1 / num2;
                printf("Division = %.2f", result);
            }
            else
            {
                printf("Division by zero is not possible");
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
