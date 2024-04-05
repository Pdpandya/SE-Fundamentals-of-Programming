#include <stdio.h>

int main() {
    int N;

    // Input the value of N from the user
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &N);

    printf("Multiplication table of %d:\n", N);

    // Iterate from 1 to 10 and print the multiplication table
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", N, i, N * i);
    }

    return 0;
}

