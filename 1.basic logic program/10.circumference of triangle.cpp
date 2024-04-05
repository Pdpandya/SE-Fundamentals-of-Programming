#include <stdio.h>

int main() {
    double side1, side2, side3, perimeter;

    printf("Enter the length of side 1 of the triangle: ");
    scanf("%lf", &side1);

    printf("Enter the length of side 2 of the triangle: ");
    scanf("%lf", &side2);

    printf("Enter the length of side 3 of the triangle: ");
    scanf("%lf", &side3);

    perimeter = side1 + side2 + side3;

    printf("Perimeter of the triangle: %.2lf\n", perimeter);

    return 0;
}

