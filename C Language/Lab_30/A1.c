
/*
1. Find length of given string without using built-in function.

Output:
Enter a string: Darshan
Length of string is: 7
*/

#include <stdio.h>

void main()
{
    char str[50];
    int i, len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    printf("Length of string is: %d", len);
}
