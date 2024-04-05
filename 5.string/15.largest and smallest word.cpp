#include <stdio.h>

int main() {
    // Hello World
    printf("Hello, World!\n");

    // Sum of Two Numbers
    int num1 = 5, num2 = 7;
    int sum = num1 + num2;
    printf("Sum of %d and %d is %d\n", num1, num2, sum);

    // Check Even or Odd
    int num = 6;
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    // Calculate Factorial
    int factorial_num = 5;
    int factorial = 1;
    for (int i = 1; i <= factorial_num; i++) {
        factorial *= i;
    }
    printf("Factorial of %d is %d\n", factorial_num, factorial);

    // Check Prime Number
    int prime_num = 7;
    int isPrime = 1; // Assume prime_num is prime
    for (int i = 2; i <= prime_num / 2; i++) {
        if (prime_num % i == 0) {
            isPrime = 0; // Set flag to indicate prime_num is not prime
            break;
        }
    }
    if (isPrime) {
        printf("%d is prime.\n", prime_num);
    } else {
        printf("%d is not prime.\n", prime_num);
    }

    return 0;
}

