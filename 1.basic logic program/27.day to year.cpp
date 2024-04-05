#include <stdio.h>

int main() {
    float days, months;

    // Accept number of days from the user
    printf("Enter number of days: ");
    scanf("%f", &days);

    // Convert days into months (assuming each month has 30 days)
    months = days / 30;

    // Display the equivalent number of months
    printf("Equivalent number of months: %.1f\n", months);

    return 0;
}

