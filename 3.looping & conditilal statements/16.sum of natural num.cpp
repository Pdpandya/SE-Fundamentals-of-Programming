#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    // Input the value of 'n' from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the sum of natural numbers up to 'n' using a while loop
    while (i <= n) {
        sum += i; // Add 'i' to the sum
        i++;      // Increment 'i' for the next iteration
    }

    // Print the sum
    printf("Sum of natural numbers up to %d is: %d\n", n, sum);

    return 0;
}

