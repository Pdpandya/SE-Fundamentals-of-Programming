#include <stdio.h>

void swap(int *a, int *b) {
    // Swap using multiplication and division
    *a = *a * *b; // Store the product of the two numbers in 'a'
    *b = *a / *b; // 'a' contains the product, so dividing by 'b' gives 'a' in 'b'
    *a = *a / *b; // 'b' contains 'a' now, so dividing by 'a' (which is 'b') gives the original 'b' in 'a'
}

int main() {
    int num1, num2;

    // Accept two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Swap numbers using multiplication and division
    swap(&num1, &num2);

    // Display the swapped numbers
    printf("Numbers after swapping: %d, %d\n", num1, num2);

    return 0;
}

