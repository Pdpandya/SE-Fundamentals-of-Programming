#include <stdio.h>

int main() {
    double side, perimeter;

    printf("Enter the length of a side of the square: ");
    scanf("%lf", &side);

    perimeter = 4 * side;

    printf("Circumference of the square: %.2lf\n", perimeter);

    return 0;
}

