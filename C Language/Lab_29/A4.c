
/*
4. Replace a character in given string.

Output:
Enter a string: Hello
Enter character to replace: l
Enter new character: x
New string = Hexxo
*/

#include <stdio.h>

int main()
{
    char str[100], old, new;
    int i = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Enter character to replace: ");
    scanf(" %c", &old);

    printf("Enter new character: ");
    scanf(" %c", &new);

    while(str[i] != '\0')
    {
        if(str[i] == old)
            str[i] = new;

        i++;
    }

    printf("New string = %s", str);

    return 0;
}
