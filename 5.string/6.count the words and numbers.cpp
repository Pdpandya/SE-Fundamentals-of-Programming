#include <stdio.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0, specials = 0, i;

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Traverse the string character by character
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the character is an alphabet
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        }
        // Check if the character is a digit
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        // All other characters are considered special characters
        else {
            specials++;
        }
    }

    // Print the counts of alphabets, digits, and special characters
    printf("Total number of alphabets: %d\n", alphabets);
    printf("Total number of digits: %d\n", digits);
    printf("Total number of special characters: %d\n", specials);

    return 0;
}

