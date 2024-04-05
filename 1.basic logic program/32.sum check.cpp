#include <stdio.h>

int main() {
    int num1, num2, sum;
    size_t size;

    // Accept two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Check the size of the sum
    size = sizeof(sum);

    // Display the sum and its size
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);
    printf("Size of the sum: %zu bytes\n", size);

    return 0;
}

