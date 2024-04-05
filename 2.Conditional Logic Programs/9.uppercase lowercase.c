#include <stdio.h>

int main() {
    char ch;

    // Input character from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is uppercase
    if (ch >= 'A' && ch <= 'Z')
        printf("%c is an uppercase letter.\n", ch);
    
    // Check if the character is lowercase
    else if (ch >= 'a' && ch <= 'z')
        printf("%c is a lowercase letter.\n", ch);
    
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9')
        printf("%c is a digit.\n", ch);
    
    // If it's not a letter or a digit, consider it a special character
    else
        printf("%c is a special character.\n", ch);

    return 0;
}

