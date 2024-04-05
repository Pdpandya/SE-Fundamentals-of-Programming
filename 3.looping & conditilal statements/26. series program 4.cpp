#include <stdio.h>

int main() {
    int n;
    double sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= (double)i / (i + 1);
        } else {
            sum += (double)i / (i + 1);
        }
    }

    printf("Result of the series is: %.2lf\n", sum);

    return 0;
}

