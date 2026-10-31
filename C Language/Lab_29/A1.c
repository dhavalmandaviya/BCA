
/*
1. Use string handling functions:
strlen(), strcmp(), strcpy(), strcat(),
strrev(), strlwr() and strupr().

Output:
Length = 5
Strings are equal.
Copied string = Hello
Combined string = Hello World
Reverse string = olleH
Lowercase = hello
Uppercase = HELLO

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "Hello";
    char str2[100] = "Hello";
    char str3[100] = " World";

    printf("Length = %d\n", (int)strlen(str1));

    if(strcmp(str1, str2) == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    strcpy(str2, str1);
    printf("Copied string = %s\n", str2);

    strcat(str1, str3);
    printf("Combined string = %s\n", str1);

    /* Restore original string */
    strcpy(str1, "Hello");

    strrev(str1);
    printf("Reverse string = %s\n", str1);

    strlwr(str1);
    printf("Lowercase = %s\n", str1);

    strupr(str1);
    printf("Uppercase = %s\n", str1);

    return 0;
}
