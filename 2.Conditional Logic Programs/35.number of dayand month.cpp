#include <stdio.h>

int main() {
    int month_number, days;

    // Input month number from user
    printf("Enter the month number (1-12): ");
    scanf("%d", &month_number);

    // Check the number of days based on the month number
    switch (month_number) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            days = 28; // Assuming it's not a leap year
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            return 1; // Exit the program with an error code
    }

    // Print the number of days in the month
    printf("Number of days in the month: %d\n", days);

    return 0;
}

