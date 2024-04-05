#include <stdio.h>

float calculatePremium(float salary) {
    float premiumRate = 0.1; // Premium rate as 10% of the salary
    return salary * premiumRate;
}

int main() {
    float salary;
    
    // Accept salary from the user
    printf("Enter your salary: ");
    scanf("%f", &salary);
    
    // Calculate the insurance premium
    float premium = calculatePremium(salary);
    
    // Display the premium
    printf("Your insurance premium:%.2f\n", premium);
    
    return 0;
}

