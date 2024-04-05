#include <stdio.h>

int main() {
    int numbers[10];
    int even_count = 0, odd_count = 0;
    int sum_even = 0, sum_odd = 0;

    // Input 10 numbers from the user
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Check if the number is even or odd and update counts and sums accordingly
        if (numbers[i] % 2 == 0) {
            even_count++;
            sum_even += numbers[i];
        } else {
            odd_count++;
            sum_odd += numbers[i];
        }
    }

    // Display the results
    printf("\nResults:\n");
    printf("a. Number of even numbers: %d\n", even_count);
    printf("b. Number of odd numbers: %d\n", odd_count);
    printf("c. Sum of even numbers: %d\n", sum_even);
    printf("d. Sum of odd numbers: %d\n", sum_odd);

    return 0;
}

