#include <stdio.h>

int main() {
    char ch;

    // Input a character from user
    printf("Enter a character: ");
    scanf(" %c", &ch); // Note the space before %c to consume any leading whitespace
   

    // Check if the character is a vowel or consonant using switch-case statement
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            if (ch >= 'a' && ch <= 'z') {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("%c is not a valid alphabet character.\n", ch);
            }
            break;
    }

    return 0;
}

