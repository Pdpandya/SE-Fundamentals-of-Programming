#include <stdio.h>

int main() {
    char str[100], substr[100];
    int start, length, i;

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Input the starting index of the substring
    printf("Enter the starting index of the substring: ");
    scanf("%d", &start);

    // Input the length of the substring
    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    // Extract the substring from the given string
    for (i = 0; i < length && str[start + i] != '\0'; i++) {
        substr[i] = str[start + i];
    }
    substr[i] = '\0'; // Add null terminator to mark the end of the substring

    // Print the extracted substring
    printf("Substring extracted from the given string: %s\n", substr);

    return 0;
}

