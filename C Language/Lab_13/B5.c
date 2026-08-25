/* Lab_13
  5. Three sides of a triangle are entered through the keyboard, WAP to check whether the triangle is isosceles, equilateral,  
scalene or right-angled triangle.
*/

#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check triangle inequality theorem
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        } else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }

        // Check for Right-Angled Triangle using Pythagorean theorem
        if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
            printf("It is also a Right-angled triangle.\n");
        }
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
