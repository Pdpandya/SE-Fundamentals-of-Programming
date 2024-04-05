#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Input three numbers from user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Assume the first number is the maximum
    max = num1;

    // Compare num2 with max
    if (num2 > max)
        max = num2;

    // Compare num3 with max
    if (num3 > max)
        max = num3;

    printf("Maximum number among %d, %d, and %d is: %d\n", num1, num2, num3, max);

    return 0;
}

