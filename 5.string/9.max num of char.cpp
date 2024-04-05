#include <stdio.h>

int main() {
    char str[100];
    int maxCharacters = 0, i;

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Traverse the string character by character to find the maximum number of characters
    for (i = 0; str[i] != '\0'; i++) {
        maxCharacters++;
    }

    // Print the maximum number of characters in the string
    printf("Maximum number of characters in the string: %d\n", maxCharacters);

    return 0;
}

