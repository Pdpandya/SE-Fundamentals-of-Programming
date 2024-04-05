#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the diamond pattern
  
    // Outer loop to print all rows
    for (int i = 0; i < rows; i++) {
  
        // Inner loop 1 to print leading spaces
        for (int j = 0; j < rows - i - 1; j++) {
            printf("  ");
        }
  
        // Inner loop 2 to print star * character
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
            if (k != 2 * i) // Omit the space after the last star in each row
                printf(" ");
        }
        printf("\n"); // Move to the next line after printing each row
    }
    return 0;
}

