#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    char word[] = "is";
    int count = 0;
    char *ptr;

    // Input the sentence from the user
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Find the first occurrence of the word 'is' in the sentence
    ptr = strstr(sentence, word);

    // Iterate through the string until 'is' is not found
    while (ptr != NULL) {
        // Increment the count of occurrences
        count++;
        // Move the pointer to the next character after the current occurrence
        ptr = strstr(ptr + 1, word);
    }

    // Print the number of times 'is' appears in the sentence
    printf("Number of times 'is' appears in the sentence: %d\n", count);

    return 0;
}

