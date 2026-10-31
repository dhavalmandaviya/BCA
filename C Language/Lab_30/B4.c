/*
4. Read two strings from user and merge second string into first string without using built-in function.

Output:
Enter first string: Hello
Enter second string: World
Merged string is: HelloWorld
*/

#include <stdio.h>

void main()
{
    char str1[100], str2[50];
    int i, j;

    printf("Enter first string: ");
    scanf("%49s", str1);

    printf("Enter second string: ");
    scanf("%49s", str2);

    for(i = 0; str1[i] != '\0'; i++)
    {
        // Find the end of first string
    }

    for(j = 0; str2[j] != '\0'; j++)
    {
        str1[i] = str2[j];
        i++;
    }

    str1[i] = '\0';

    printf("Merged string is: %s", str1);
}