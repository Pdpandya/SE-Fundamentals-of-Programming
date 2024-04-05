#include <stdio.h>

int main() {
    int number, a, b, sum;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Extract the last digit
    b = number % 10;

    // Extract the first digit
    a = number;
    while (a >= 10) {
        a /= 10;
    }

    // Calculate the summation of the first and last digits
    sum = a + b;

    // Print the summation
    printf("Summation of first and last digits: %d\n", sum);

    return 0;
}

