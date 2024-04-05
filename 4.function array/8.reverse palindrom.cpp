#include <stdio.h>
#include <string.h>

// Function to check if a string is palindrome
int isPalindrome(const char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    const char *str = "radar";

    // Reverse the string
    char reversed[100];
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0'; // Null terminate the reversed string

    // Check if the string is palindrome
    if (isPalindrome(str)) {
        printf("The string is palindrome.\n");
    } else {
        printf("The string is not palindrome.\n");
    }

    return 0;
}

