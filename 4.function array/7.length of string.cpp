#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    
    // Iterate through the characters of the string until '\0' is found
    while (str[length] != '\0') {
        length++;
    }
    
    return length;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    int length = stringLength(str);
    printf("Length of the string: %d\n", length);
    
    return 0;
}

