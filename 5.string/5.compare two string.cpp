#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, isEqual = 1;

    // Input the first string from the user
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Input the second string from the user
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Compare the strings character by character
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            isEqual = 0; // Set isEqual to 0 if characters at the same index are not equal
            break; // Exit the loop if a mismatch is found
        }
    }

    // Print the result of the comparison
    if (isEqual) {
        printf("The two strings are equal.\n");
    } else {
        printf("The two strings are not equal.\n");
    }

    return 0;
}

