/* LAB - 12
   2. Calculate Gross Salary according to Basic Salary
*/

#include <stdio.h>

int main()
{
    float basic, hra, da, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    if (basic >= 30000)
    {
        hra = 30;
        da = 95;
    }
    else if (basic >= 20000)
    {
        hra = 25;
        da = 90;
    }
    else if (basic >= 10000)
    {
        hra = 20;
        da = 80;
    }
    else
    {
        hra = 0;
        da = 0;
    }

    hra = basic * hra / 100;
    da = basic * da / 100;

    gross = basic + hra + da;

    printf("Basic Salary = %.2f\n", basic);
    printf("HRA = %.2f\n", hra);
    printf("DA = %.2f\n", da);
    printf("Gross Salary = %.2f", gross);

    return 0;
}
