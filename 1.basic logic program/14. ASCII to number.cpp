#include <stdio.h>

int main() {
    char character;
    
    // the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &character);
    
    // Convert character to ASCII value
    int asciiValue = (int)character;
    
    // Display the ASCII value
    printf("ASCII value of '%c' is: %d\n", character, asciiValue);
    
    return 0;
}

