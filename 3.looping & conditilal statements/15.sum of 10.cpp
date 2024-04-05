#include <stdio.h>

int main() {
    int count = 0; // Counter for number of inputs
    int sum = 0;   // Variable to store the sum
    int number;    // Variable to store each input number

    printf("Enter 10 numbers:\n");

    // Using a while loop to read 10 numbers
    while (count < 10) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &number);
        sum += number; // Add each number to the sum
        count++;      // Increment the counter
    }

    printf("Sum of the 10 numbers is: %d\n", sum);

    return 0;
}

