#include <stdio.h>

#define NAME 50
#define STUDENTS 5

int main() {
    char names[STUDENTS][NAME]; // Array to store 5 names

    // Accept names from the user
    printf("Enter names of 5 students:\n");
    for (int i = 0; i < STUDENTS; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]); // Assuming names do not contain spaces 
    }

    // Display the names
    printf("\nNames of 5 students:\n");
    for (int i = 0; i <STUDENTS; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}

