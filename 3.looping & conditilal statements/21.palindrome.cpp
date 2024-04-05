#include <stdio.h>

int main() {
    int count = 0;
    int num;

    // Accept 3 numbers from the user
    printf("Enter 3 numbers:\n");
    while (count < 3) {
        scanf("%d", &num);

        int reversedNum = 0, originalNum = num;
        
        // Reverse the number
        while (num > 0) {
            int remainder = num % 10;
            reversedNum = reversedNum * 10 + remainder;
            num /= 10;
        }

        // the reversed number is equal to the original number
        if (originalNum == reversedNum)
            printf("%d is a palindrome.\n", originalNum);
        else
            printf("%d is not a palindrome.\n", originalNum);

        count++;
    }

    return 0;
}

