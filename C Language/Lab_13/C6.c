/* Lab_13
  6. Find the second largest number among three user input numbers.
*/

#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        if (num2 >= num3) {
            printf("Second largest number is: %d\n", num2);
        } else {
            printf("Second largest number is: %d\n", num3);
        }
    } else if (num2 >= num1 && num2 >= num3) {
        if (num1 >= num3) {
            printf("Second largest number is: %d\n", num1);
        } else {
            printf("Second largest number is: %d\n", num3);
        }
    } else {
        if (num1 >= num2) {
            printf("Second largest number is: %d\n", num1);
        } else {
            printf("Second largest number is: %d\n", num2);
        }
    }

    return 0;
}
