#include <stdio.h>

#define SIZE 10

int main() {
    int matrix[SIZE][SIZE]; // Define a 10x10 matrix
    int row, col, num = 1; // Initialize variables for row, column, and number

    // Fill the matrix in a spiral pattern
    int top = 0, bottom = SIZE - 1, left = 0, right = SIZE - 1;
    while (num <= SIZE * SIZE) {
        // Fill top row
        for (col = left; col <= right; col++) {
            matrix[top][col] = num++;
        }
        top++;

        // Fill right column
        for (row = top; row <= bottom; row++) {
            matrix[row][right] = num++;
        }
        right--;

        // Fill bottom row
        for (col = right; col >= left; col--) {
            matrix[bottom][col] = num++;
        }
        bottom--;

        // Fill left column
        for (row = bottom; row >= top; row--) {
            matrix[row][left] = num++;
        }
        left++;
    }

    // Print the matrix
    for (row = 0; row < SIZE; row++) {
        for (col = 0; col < SIZE; col++) {
            printf("%2d ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}

