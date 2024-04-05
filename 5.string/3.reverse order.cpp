#include <stdio.h>

int main() {
    char str[100];
    
    // Input a string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Print individual characters of the string in reverse order
    printf("Individual characters in reverse order:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        // Empty loop body; just iterate to find the length of the string
    }

    // Start printing characters in reverse order
    for (int i = i - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }

    return 0;
}

