#include <stdio.h>

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

int main() {
    float fahrenheit, celsius;

    // Accept temperature in Fahrenheit from the user
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = fahrenheitToCelsius(fahrenheit);

    // Display the converted temperature
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}

