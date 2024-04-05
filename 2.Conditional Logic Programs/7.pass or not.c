#include <stdio.h>

int main() {
    int marks;

    // Accept marks from the user
    printf("Enter the marks: ");
    scanf("%d", &marks);

    // Check if the student has passed or failed
    if (marks >= 35)
	{
        printf("Congratulations! You have passed.\n");
    } else {
        printf("Sorry! You have failed.\n");
    }

    return 0;
}

