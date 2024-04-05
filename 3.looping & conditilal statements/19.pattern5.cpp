#include <stdio.h>

int main() {
    int rows = 7; // Number of rows for the triangle

    // Upper part of the triangle
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf(" *");
        }
        printf("\n");
    }

    // Lower part of the triangle
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}

