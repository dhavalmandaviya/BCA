
/*
3. Read and store the roll no and marks of 20 students
   using 2D array.

Output:
Enter roll number and marks for 20 students:
105 85
105 90
...
Student details:
Roll No.    Marks
105         85
105         90
...

*/

#include <stdio.h>

int main()
{
    int a[20][2], i;

    printf("Enter roll number and marks for 20 students:\n");

    for(i = 0; i < 20; i++)
    {
        scanf("%d %d", &a[i][0], &a[i][1]);
    }

    printf("\nStudent details:\n");
    printf("Roll No.\tMarks\n");

    for(i = 0; i < 20; i++)
    {
        printf("%d\t\t%d\n", a[i][0], a[i][1]);
    }

    return 0;
}
