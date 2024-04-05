#include <stdio.h>

int main() {
    double side, area;

    printf("Enter the length of a side of the square: ");
    scanf("%lf", &side);

    area = side * side;

    printf("Area of the square: %.2lf\n", area);

    return 0;
}

