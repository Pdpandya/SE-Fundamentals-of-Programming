#include <stdio.h>

int main() {
    int num, a, b, c, max_digit = -1;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Ensure number is non-negative
    if (num < 0) {
        num = -num;
    }
    a = num;

    // Find the maximum digit
    while (a > 0) {
        b = a % 10;
        if (b > max_digit) {
            max_digit = b;
        }
        a /= 10;
    }

    // Print the maximum digit
    printf("Max number is %d\n", max_digit);

    return 0;
}

