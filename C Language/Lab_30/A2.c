/*
2. Convert a string into uppercase and lowercase without using built-in function.

Output:
Enter a string: Darshan
Uppercase string: DARSHAN
Lowercase string: darshan
*/

#include <stdio.h>

void main()
{
    char str[50], upper[50], lower[50];
    int i;

    printf("Enter a string: ");
    scanf("%49s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        upper[i] = str[i];
        lower[i] = str[i];

        if(upper[i] >= 'a' && upper[i] <= 'z')
        {
            upper[i] = upper[i] - 32;
        }

        if(lower[i] >= 'A' && lower[i] <= 'Z')
        {
            lower[i] = lower[i] + 32;
        }
    }

    upper[i] = '\0';
    lower[i] = '\0';

    printf("Uppercase string: %s\n", upper);
    printf("Lowercase string: %s", lower);
}