#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            printf("%d ", i * 2);
        } else {
            printf("%d ", i);
        }
    }

    return 0;
}

