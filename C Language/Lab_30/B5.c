/*
5. Count occurrence of a given character in a string.

Output:
Enter a string: banana
Enter a character: a
Occurrence of a is: 3
*/

#include <stdio.h>

void main()
{
    char str[50], ch;
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%49s", str);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }

    printf("Occurrence of %c is: %d", ch, count);
}