#include <stdio.h>

int main() {
    char sentence[100];

    // Input the sentence from the user
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Iterate through each character of the sentence
    for (int i = 0; sentence[i] != '\0'; i++) {
        // Check if the character is lowercase
        if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            // Convert the lowercase character to uppercase
            sentence[i] -= 32;
        }
        // Check if the character is uppercase
        else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            // Convert the uppercase character to lowercase
            sentence[i] += 32;
        }
    }

    // Print the modified sentence
    printf("Modified sentence: %s\n", sentence);

    return 0;
}

