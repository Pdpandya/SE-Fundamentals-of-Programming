#include <stdio.h>

// Function to find the factorial of a number using recursion
double factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    } else {
        // Recursive call to find factorial of (n-1)
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Input the number from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num < 0) {
        printf("Error! Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate the factorial using recursion
        double fact = factorial(num);
        printf("Factorial of %d = %.0lf\n", num, fact);
    }

    return 0;
}

