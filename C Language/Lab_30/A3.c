/*
3. Copy given string into another string without using built-in function.

Output:
Enter a string: Darshan
Copied string is: Darshan
*/

#include <stdio.h>

void main()
{
    char str1[50], str2[50];
    int i;

    printf("Enter a string: ");
    scanf("%49s", str1);

    for(i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }

    str2[i] = '\0';

    printf("Copied string is: %s", str2);
}