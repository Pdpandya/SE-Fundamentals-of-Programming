#include <stdio.h>

int main() {
    char names[5][50]; // Array to store 5 names, each with maximum length of 50 characters

    // Input 5 names from the user
    printf("Enter 5 names:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]); // Read each name using %s format specifier
    }

    // Display the names entered
    printf("\nNames entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]); // Print each name
    }

    return 0;
}

