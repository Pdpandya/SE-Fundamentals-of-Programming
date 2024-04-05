#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Iterate through the string
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        // Check if the character is an alphabet (lowercase or uppercase)
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            // If it's an alphabet, copy it to the new string
            str[j++] = str[i];
        }
    }
    // Add null terminator to mark the end of the new string
    str[j] = '\0';

    // Print the modified string with only alphabets
    printf("String with only alphabets: %s\n", str);

    return 0;
}

