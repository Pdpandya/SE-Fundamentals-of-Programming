#include <stdio.h>

int main() {
    int years, days;

    // Accept number of years from the user
    printf("Enter number of years: ");
    scanf("%d", &years);

    // Convert years into days
    days = years * 365;  // Assuming 1 year = 365 days

    // Display the equivalent number of days
    printf("Equivalent number of days for %d years: %d\n", years, days);

    // Accept number of days from the user
    printf("\nEnter number of days: ");
    scanf("%d", &days);

    // Convert days into years
    years = days / 365;  // Assuming 1 year = 365 days

    // Display the equivalent number of years
    printf("Equivalent number of years for %d days: %d\n", days, years);

    return 0;
}

