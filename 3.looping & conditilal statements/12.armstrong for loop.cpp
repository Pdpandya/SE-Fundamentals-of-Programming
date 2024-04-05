#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &a);

    int originalNumber = a;

    // Count number of digits
    for (; originalNumber != 0; ++n) {
        originalNumber /= 10;
    }

    originalNumber = a;

    // Calculate result
    while (originalNumber != 0) {
        b = originalNumber % 10;
        c += pow(b, n);
        originalNumber /= 10;
    }

    if (c == a)
        printf("%d is an Armstrong number.\n", a);
    else
        printf("%d is not an Armstrong number.\n", a);

    return 0;
}

