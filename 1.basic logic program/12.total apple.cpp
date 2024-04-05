#include <stdio.h>

int main() {
    int numStudents;
    
    // Prompt the user to enter the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    
    // Calculate the total number of apples required
    int totalApples = numStudents * 5;
    
    // Display the result
    printf("Total apples required: %d\n", totalApples);
    
    return 0;
}

