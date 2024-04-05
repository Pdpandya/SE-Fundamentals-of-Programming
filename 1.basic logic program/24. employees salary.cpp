#include <stdio.h>

int main() {
    char names[5][50];  // Array to store names of employees
    float salaries[5];  // Array to store salaries of employees
    float totalSalary = 0, averageSalary;
    int i;

    // Accept names and salaries of 5 employees
    for (i = 0; i < 5; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &salaries[i]);

        // Add salary to total salary
        totalSalary += salaries[i];
    }

    // Calculate average salary
    averageSalary = totalSalary / 5;

    // Display total and average salary
    printf("\nTotal salary: %.2f\n", totalSalary);
    printf("Average salary: %.2f\n", averageSalary);

    return 0;
}

