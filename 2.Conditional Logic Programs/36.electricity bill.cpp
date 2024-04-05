#include <stdio.h>

int main() {
    int units;
    float total_bill, surcharge = 0;

    // Input electricity units from user
    printf("Enter the number of electricity units consumed: ");
    scanf("%d", &units);

    // Calculate total bill based on units consumed
    if (units <= 50) {
        total_bill = units * 0.50;
    } else if (units > 50 && units <= 150) {
        total_bill = (50 * 0.50) + ((units - 50) * 0.75);
    } else if (units > 150 && units <= 250) {
        total_bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } else {
        total_bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    // Add surcharge of 20%
    surcharge = total_bill * 0.20;
    total_bill += surcharge;

    // Print the total electricity bill
    printf("Total electricity bill: Rs. %.2f\n", total_bill);

    return 0;
}

