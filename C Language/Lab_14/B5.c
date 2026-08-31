/*
5. Check whether character is an alphabet or not using conditional operator. 
*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')
        ? printf("Character is an alphabet")
        : printf("Character is not an alphabet");

    return 0;
}
