#include <stdio.h>

int main() {
    int n;
    double sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (double)i * i;
    }

    printf("Sum of squares of natural numbers from 1 to %d is: %.2lf\n", n, sum);

    return 0;
}

