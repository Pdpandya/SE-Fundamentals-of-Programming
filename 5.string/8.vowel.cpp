#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i;

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Traverse the string character by character
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the character is an alphabet
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            // Convert the character to lowercase for simplicity
            char ch = tolower(str[i]);
            // Check if the character is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Print the counts of vowels and consonants
    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);

    return 0;
}

