#include <stdio.h>

int main() {
    int num;

    // Accept an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate and print the first three powers
    printf("First three powers of %d:\n", num);
    printf("%d^1 = %d\n", num, num);         // N^1
    printf("%d^2 = %d\n", num, num * num);   // N^2
    printf("%d^3 = %d\n", num, num * num * num); // N^3

    return 0;
}

