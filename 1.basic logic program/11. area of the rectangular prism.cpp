#include <stdio.h>

int main() {
    // Variables to store width, length, and height
    float width, length, height;

    // Prompt the user to enter dimensions
    printf("Enter the width : ");
    scanf("%f", &width);
    printf("Enter the length: ");
    scanf("%f", &length);
    printf("Enter the height: ");
    scanf("%f", &height);

    // Calculate surface area using the formula
    float surfaceArea = 2 * (width * length + length * height + height * width);

    // Display the result
    printf("The area of the rectangular prism is: %.2f\n", surfaceArea);

    return 0;
}

