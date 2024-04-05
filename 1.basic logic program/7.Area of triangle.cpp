#include <stdio.h>

int main() {
    double base, height, area;

    printf("Enter the base length of the triangle: ");
    scanf("%lf", &base);

    printf("Enter the height of the triangle: ");
    scanf("%lf", &height);

    area = 0.5 * base * height;

    printf("Area of the triangle: %.2lf\n", area);

    return 0;
}

