#include <stdio.h>

int main() {
    int numbers[5];

    // Input five numbers from the user
    printf("Enter five numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display all the numbers entered
    printf("\nThe numbers entered are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}

