
/*
3. Find a character from given string.

Output:
Enter a string: Hello
Enter character to search: l
Character found.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    if(strchr(str, ch) != NULL)
        printf("Character found.");
    else
        printf("Character not found.");

    return 0;
}
