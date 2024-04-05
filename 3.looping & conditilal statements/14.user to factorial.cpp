#include <stdio.h>

int main() {
    int numbers[5];
    int i, j, factorial;

    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculate and print factorials
    for (i = 0; i < 5; i++) {
        factorial = 1; // Reset factorial for each number
        for (j = 1; j <= numbers[i]; j++) {
            factorial *= j;
        }
        printf("Factorial of %d = %d\n", numbers[i], factorial);
    }

    return 0;
}

