#include <stdio.h>

int main() {
    float num;

    // Input number from user
    printf("Enter a number: ");
    scanf("%f", &num);

    // Check if the number is negative
    if (num < 0)
        printf("%.2f is a negative number.\n", num);
    
    // Check if the number is positive
    else if (num > 0)
        printf("%.2f is a positive number.\n", num);
    
    // If the number is neither negative nor positive, it must be zero
    else
        printf("The number is zero.\n");

    return 0;
}

