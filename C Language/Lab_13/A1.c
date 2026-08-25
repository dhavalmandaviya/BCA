/* Lab_13
   1. Print weekday based on given number.
*/
#include <stdio.h>

int main() {
    int day;
    printf("Enter day number (1-7): \n");
    scanf("%d", &day);

    if (day == 1) {
        printf("Monday\n");
    } else if (day == 2) {
        printf("Tuesday\n");
    } else if (day == 3) {
        printf("Wednesday\n");
    } else if (day == 4) {
        printf("Thursday\n");
    } else if (day == 5) {
        printf("Friday\n");
    } else if (day == 6) {
        printf("Saturday\n");
    } else if (day == 7) {
        printf("Sunday\n");
    } else {
        printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
