#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    // Accept 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculate the sum of the array
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    // Display the sum of the array
    printf("Sum of the numbers in the array: %d\n", sum);

    return 0;
}

