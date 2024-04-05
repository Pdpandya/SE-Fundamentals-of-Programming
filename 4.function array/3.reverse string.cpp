#include <stdio.h>
#include <string.h>

// Function to reverse a string using recursion
void reverseString(char *str, int start, int end) {
    // Base condition: if start index crosses end index, return
    if (start >= end) {
        return;
    }

    // Swap characters at start and end indices
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call to reverse remaining substring
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];

    // Input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    // Calculate the length of the string
    int length = strlen(str);

    // Reverse the string using recursion
    reverseString(str, 0, length - 1);

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}

