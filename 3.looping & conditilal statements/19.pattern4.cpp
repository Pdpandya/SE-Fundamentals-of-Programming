#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop to iterate over each row
    for (int i = 0; i < rows; i++) {
        int num = 1; // Initialize the number to be printed

        // Inner loop to print numbers in each row
        for (int j = 0; j <= i; j++) {
            // Print either 1 or 0 based on whether j is even or odd
            printf("%d ", num);
            num = !num; // Flip the value of num (0 to 1 or 1 to 0)
        }

        printf("\n"); // Move to the next line after printing each row
    }

    return 0;
}

