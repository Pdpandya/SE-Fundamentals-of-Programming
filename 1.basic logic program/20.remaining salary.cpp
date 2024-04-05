#include <stdio.h>

int main() {
    float monthlySalary, insurancePremium, loanInstallment, remainingSalary;

    // Accept monthly salary from the user
    printf("Enter your monthly salary: ");
    scanf("%f", &monthlySalary);

    // Calculate insurance premium (10% deduction)
    insurancePremium = 0.1 * monthlySalary;

    // Calculate remaining salary after insurance premium deduction
    remainingSalary = monthlySalary - insurancePremium;

    // Calculate loan installment (10% deduction from remaining salary)
    loanInstallment = 0.1 * remainingSalary;

    // Calculate remaining salary after loan installment deduction
    remainingSalary -= loanInstallment;

    // Display the results
    printf("Monthly Salary: %.2f\n", monthlySalary);
    printf("Insurance Premium (10%% deduction): %.2f\n", insurancePremium);
    printf("Loan Installment (10%% deduction from remaining salary after insurance premium deduction): %.2f\n", loanInstallment);
    printf("Remaining Salary after both deductions: %.2f\n", remainingSalary);

    return 0;
}

