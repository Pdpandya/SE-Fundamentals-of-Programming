#include <stdio.h>

int main() {
    int asciiCode;
    
    //  the user to enter the ASCII code
    printf("Enter the ASCII code: ");
    scanf("%d", &asciiCode);
    
    // Convert ASCII code to character using typecasting
    char character = (char)asciiCode;
    
    // Display the character value
    printf("Character: %c\n", character);
    
    return 0;
}

