#include <stdio.h>

int main() {
    int a = 0; // Counter for number of inputs
    int b = 0; // Counter for number of even numbers
    int c = 0; // Counter for number of odd numbers
    int number;    // Variable to store each input number

    printf("Enter 5 numbers:\n");

    // Using a while loop to read 5 numbers
    while (a < 5) {
        printf("Enter number %d: ", a + 1);
        scanf("%d", &number);

        // Check if the number is even or odd and increment the respective counters
        if (number % 2 == 0) {
            b++;
        } else {
            c++;
        }

        a++;      // Increment the counter
    }

    printf("Number of even numbers: %d\n", b);
    printf("Number of odd numbers: %d\n", c);

    return 0;
}

