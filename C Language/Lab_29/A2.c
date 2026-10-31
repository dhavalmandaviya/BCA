
/*
2. Print all characters of given string.

Output:
Enter a string: Hello
H
e
l
l
o
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    while(str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
