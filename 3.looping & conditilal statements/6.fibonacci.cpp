#include <stdio.h>

int main() {
    int num, a = 0, b = 1, c;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    while (a <= num) {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}

