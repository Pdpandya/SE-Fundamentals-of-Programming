#include <stdio.h>

int main() {
    char str1[100], str2[100], combined[200];
    int i, j;

    // Input the first string from the user
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Input the second string from the user
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Copy the characters of the first string to the combined string
    for (i = 0; str1[i] != '\0'; i++) {
        combined[i] = str1[i];
    }

    // Append the characters of the second string to the combined string
    for (j = 0; str2[j] != '\0'; j++) {
        combined[i + j] = str2[j];
    }

    // Add null terminator to mark the end of the combined string
    combined[i + j] = '\0';

    // Print the combined string
    printf("Combined string: %s\n", combined);

    return 0;
}

