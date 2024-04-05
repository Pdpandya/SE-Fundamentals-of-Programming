#include <stdio.h>

int main() {
    // Declare a character array to store the input string
    char str[10];

    // Prompt the user to enter a string
    printf("Enter string: ");
    
    // Read the input string from the user
    gets(str);

    // Print a message indicating that individual characters will be printed
    printf("Individual characters:\n");
    
    // Iterate through each character of the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Print each character on a separate line
        printf("%c\n", str[i]);
    }

    // Return 0 to indicate successful execution
    return 0;
}

