#include <stdio.h>

int main() {
    int n, sum = 0, innerSum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        innerSum += i;
        sum += innerSum;
    }

    printf("Result of the series is: %d\n", sum);

    return 0;
}

