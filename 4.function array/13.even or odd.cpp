#include <stdio.h>

int main() {
    const int NUMBERS = 5; // Number of numbers to be entered
    int nums[NUMBERS];

    // Accept 5 numbers from the user
    printf("Enter %d numbers:\n", NUMBERS);
    for (int i = 0; i < NUMBERS; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    // Check each number for even or odd
    printf("\nResults:\n");
    for (int i = 0; i < NUMBERS; i++) {
        if (nums[i] % 2 == 0) {
            printf("%d is even.\n", nums[i]);
        } else {
            printf("%d is odd.\n", nums[i]);
        }
    }

    return 0;
}

