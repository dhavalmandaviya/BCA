/*
3. Input a string in character array and print string
   and length of string.

Output:
Enter a string: Hello
String = Hello
Length = 5
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
        i++;
    }

    printf("String = %s\n", str);
    printf("Length = %d", i);

    return 0;
}
