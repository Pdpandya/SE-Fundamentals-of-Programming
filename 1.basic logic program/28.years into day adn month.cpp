#include <stdio.h>

int main() {
    int years, months, days;

    // Accept number of years from the user
    printf("Enter number of years: ");
    scanf("%d", &years);

    // Convert years into months and days
    months = years * 12;   // 1 year = 12 months
    days = years * 365;    // 1 year = 365 days

    // Display the equivalent number of months and days
    printf("Equivalent number of months: %d\n", months);
    printf("Equivalent number of days: %d\n", days);

    return 0;
}

