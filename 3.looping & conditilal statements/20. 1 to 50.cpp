#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 10;
    int num = 1;

    // Outer loop for rows
    for (int i = 0; i < rows; i++) {
        // Inner loop for columns
        for (int j = 0; j < cols; j++) {
            printf("%02d ", num++); // Print the number with leading zeros if necessary
        }
        printf("\n"); // Move to the next line after printing each row
    }

    return 0;
}

