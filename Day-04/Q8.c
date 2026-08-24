Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Two distinct real roots: %.2f and %.2f", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);

        printf("Two equal real roots: %.2f", root1);
    }
    else {
        printf("No real roots (complex roots)");
    }

    return 0;
}
