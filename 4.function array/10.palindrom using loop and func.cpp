#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int reversed = 0, original = num;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }

    return 0;
}

