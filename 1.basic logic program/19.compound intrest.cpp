#include <stdio.h>
#include <math.h>

float calculateCompoundInterest(float principal, float rate, int time, int n) {
    float amount;
    amount = principal * pow(1 + rate / n, n * time);
    return amount;
}

int main() {
    float principal, rate, amount;
    int time, n;

    // Input principal amount, rate, time, and number of times interest is compounded per year
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual interest rate (in decimal): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%d", &time);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Calculate compound interest
    amount = calculateCompoundInterest(principal, rate, time, n);

    // Display the amount
    printf("Compound interest after %d years: $%.2f\n", time, amount);

    return 0;
}

