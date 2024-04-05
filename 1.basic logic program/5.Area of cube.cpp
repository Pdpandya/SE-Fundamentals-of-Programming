#include <stdio.h>

int main() {
    double side, surface_area;

    printf("Enter the length of a side of the cube: ");
    scanf("%lf", &side);

    surface_area = 6 * side * side;

    printf("area of the cube: %.2lf\n", surface_area);

    return 0;
}

