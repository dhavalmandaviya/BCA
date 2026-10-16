/*
2. Question: Read height and weight of five persons.
Count persons having height greater than 170
and weight less than 50.

Output:
Enter height and weight of person 1: 175 45
Enter height and weight of person 2: 160 48
Enter height and weight of person 3: 180 49
Enter height and weight of person 4: 172 55
Enter height and weight of person 5: 165 60
Count = 2

*/

#include <stdio.h>

int main()
{
    int height[5], weight[5];
    int i, count = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter height and weight of person %d: ", i + 1);
        scanf("%d %d", &height[i], &weight[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (height[i] > 170 && weight[i] < 50)
        {
            count++;
        }
    }

    printf("Count = %d", count);

    return 0;
}