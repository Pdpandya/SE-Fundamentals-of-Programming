#include <stdio.h>

int main() {
    float kilometers, meters;

    // Accept distance in kilometers from the user
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    // Convert kilometers into meters
    meters = kilometers * 1000;  // 1 kilometer = 1000 meters

    // Display the equivalent distance in meters
    printf("Equivalent distance in meters: %.2f\n", meters);

    return 0;
}

