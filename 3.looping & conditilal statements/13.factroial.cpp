#include <stdio.h>

int main() {
    int number;
    int factorial = 1; // Initialize factorial to 1

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate factorial using a while loop
    int i = 1;
    while (i <= number) {
        factorial *= i;
        i++;
    }

    // Print the factorial
    printf("Factorial of %d = %d\n", number, factorial);

    return 0;
}

