#include <stdio.h>

int main() {
    float num1, num2, num3, largest;

    // Input three numbers from user
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Assume the first number is the largest
    largest = num1;

    // Compare num2 with largest
    if (num2 > largest)
        largest = num2;

    // Compare num3 with largest
    if (num3 > largest)
        largest = num3;

    // Print the largest number
    printf("The largest number among %.2f, %.2f, and %.2f is: %.2f\n", num1, num2, num3, largest);

    return 0;
}

