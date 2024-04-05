#include <stdio.h>

int main() {
    int number, reverse = 0, remainder;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reverse);

    return 0;
}

