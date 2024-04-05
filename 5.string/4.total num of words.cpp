#include <stdio.h>
#include <stdbool.h>

int main() {
    // Declare a character array to store the input string
    char str[100];

    // Prompt the user to enter a string
    printf("Enter a string: ");
    
    // Read the input string from the user
    scanf("%[^\n]", str);

    // Declare variables to count words and track word state
    int wordCount = 0;
    bool inWord = false;

    // Iterate through each character of the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the current character is a whitespace
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r') {
            // If we were inside a word, increment the word count
            if (inWord) {
                wordCount++;
                inWord = false; // Mark that we are not inside a word anymore
            }
        } else {
            // We are inside a word
            inWord = true;
        }
    }

    // If the last character was part of a word, increment the word count
    if (inWord) {
        wordCount++;
    }

    // Print the total number of words
    printf("Total number of words in the string: %d\n", wordCount);

    // Return 0 to indicate successful execution
    return 0;
}

