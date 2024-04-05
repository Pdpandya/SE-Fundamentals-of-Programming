#include <stdio.h>

int main() {
    int customer_id, units;
    char customer_name[50];
    float total_amount, charge_per_unit, surcharge = 0, minimum_bill = 256;

    // Input customer details
    printf("Enter customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter customer name: ");
    scanf("%s", customer_name);
    printf("Enter units consumed: ");
    scanf("%d", &units);

    // Calculate total amount based on units consumed
    if (units <= 350) {
        charge_per_unit = 1.20;
    } else if (units > 350 && units < 600) {
        charge_per_unit = 1.50;
    } else if (units >= 600 && units < 800) {
        charge_per_unit = 1.80;
    } else {
        charge_per_unit = 2.00;
    }

    total_amount = units * charge_per_unit;

    // Apply surcharge if total amount exceeds Rs. 800
    if (total_amount > 800) {
        surcharge = total_amount * 0.18;
        total_amount += surcharge;
    }

    // Check if the total amount is less than the minimum bill
    if (total_amount < minimum_bill) {
        total_amount = minimum_bill;
    }

    // Print electricity bill
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %d\n", units);
    printf("Total Amount to be Paid: Rs. %.2f\n", total_amount);

    return 0;
}

