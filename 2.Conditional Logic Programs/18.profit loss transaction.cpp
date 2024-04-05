#include <stdio.h>

int main() {
    float cp, sp, profit, loss;

    // Input cost price and selling price from the user
    printf("Enter the cost price: ");
    scanf("%f", &cp);
    printf("Enter the selling price: ");
    scanf("%f", &sp);

    // Calculate profit and loss
    if (sp > cp) {
        profit = sp - cp;
        printf("Profit: %.2f\n", profit);
    } else if (cp > sp) {
        loss = cp - sp;
        printf("Loss: %.2f\n", loss);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}

