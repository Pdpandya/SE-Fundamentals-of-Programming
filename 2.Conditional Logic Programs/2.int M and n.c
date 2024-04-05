#include <stdio.h>

int main() {
    int m, n;

    // Accept an integer from the user
    printf("Enter an integer (m): ");
    scanf("%d", &m);

    // Determine the value of n based on the value of m
    if (m > 0) {
        n = 1;
    } else if (m == 0) {
        n = 0;
    } else {
        n = -1;
    }

    // Display the value of n
    printf("Value of n: %d\n", n);

    return 0;
}

