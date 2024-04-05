#include <stdio.h>

int main() {
    int num;
    int factorial = 1;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate factorial of the given number
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (num == 0) {
        printf("Factorial of 0 is 1.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %d\n", num, factorial);
    }

    return 0;
}

