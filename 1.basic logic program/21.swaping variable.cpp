#include <stdio.h>

void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int num1, num2;

    // Accept two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Swap numbers without using a third variable
    swap(&num1, &num2);
    printf(" swapping : %d, %d\n", num1, num2);

    return 0;
}

