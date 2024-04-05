#include <stdio.h>

int main() {
    int rows = 4;
    char n = 'A'; // Starting character

    // Outer loop to print all rows
    for (int i = 0; i < rows; i++) {
        // Inner loop to print alphabet characters in each row
        for (int j = 0; j <= i; j++) {
            printf("%c ", n++);
        }
        printf("\n");
    }
    return 0;
}

