#include <stdio.h>
#include <math.h>

float CompoundInterest(float principal, float rate, int time) {
    float amount;
    amount = principal * pow(1 + rate / 100, time);
    return amount;
}

float calculateInterest(float principal, float amount) {
    return amount - principal;
}

int main() {
    float principal, rate, amount, interest;
    int time;

    // Accept principal amount, rate, and time from the user
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%d", &time);

    // Calculate amount using compound interest formula
    amount = CompoundInterest(principal, rate, time);

    // Calculate compound interest
    interest = calculateInterest(principal, amount);

    // Display the results
    printf("Amount after %d years: %.2f\n", time, amount);
    printf("Compound Interest after %d years: %.2f\n", time, interest);

    return 0;
}

