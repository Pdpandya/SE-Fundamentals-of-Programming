#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Ensure number is non-negative
    if (number < 0) {
        number = -number;
    }

    // Calculate the summation of the digits
    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    // Print the summation
    printf("Summation of digits: %d\n", sum);

    return 0;
}

