/*
   1. Demonstrate the behaviour of switch case without break.

Output :-
One
Two
Three
Default case

*/
  
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number (1-3): ");
    scanf("%d", &n);

    switch(n)
    {
        case 1:
            printf("One\n");

        case 2:
            printf("Two\n");

        case 3:
            printf("Three\n");

        default:
            printf("Default case\n");
    }

    return 0;
}
