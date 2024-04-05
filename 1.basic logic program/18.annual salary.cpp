#include <stdio.h>

int main() {
    float monthlySalary;
    float annualSalary;

    // the user to enter their monthly salary
    printf("Enter your monthly salary: ");
    scanf("%f", &monthlySalary);

    // Calculate the annual salary by multiplying the monthly salary by 12
    annualSalary = monthlySalary * 12;

    // Display the annual salary to the user
    printf("Your annual salary: %.2f\n", annualSalary);

    return 0;
}

