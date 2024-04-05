#include <stdio.h>

int main() {
    float expenses[5];  // Array to store the expenses
    float totalExpense = 0, averageExpense;
    int i;

    // Accept expenses from the user
    printf("Enter 5 expenses:\n");
    for (i = 0; i < 5; i++) {
        printf("Expense %d: ", i + 1);
        scanf("%f", &expenses[i]);

        // Add expense to totalExpense
        totalExpense += expenses[i];
    }

    // Calculate average expense
    averageExpense = totalExpense / 5;

    // Display total and average expense
    printf("\nTotal expense: %.2f\n", totalExpense);
    printf("Average expense: %.2f\n", averageExpense);

    return 0;
}

