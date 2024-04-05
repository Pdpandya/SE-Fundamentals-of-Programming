#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i;

    // Input the string to be copied
    printf("Enter a string to copy: ");
    scanf("%s", str1);

    // Copy the contents of str1 to str2
    for (i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    str2[i] = '\0'; // Add null to mark the end of the string

    // Print the copied string
    printf("Copied string: %s\n", str2);

    return 0;
}

