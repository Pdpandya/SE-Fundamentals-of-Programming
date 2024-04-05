#include <stdio.h>
#include <stdlib.h>

// Compare function for sorting in ascending order
int Ascending(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to print array elements
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;

    // Input size of arrays
    printf("Enter the size of arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];

    // Input elements of the first array
    printf("Enter %d elements for the first array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input elements of the second array
    printf("Enter %d elements for the second array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    // Sort both arrays in ascending order
    qsort(arr1, size, sizeof(int), Ascending);
    qsort(arr2, size, sizeof(int), Ascending);

    // Print sorted arrays
    printf("Sorted array 1: ");
    printArray(arr1, size);

    printf("Sorted array 2: ");
    printArray(arr2, size);

    return 0;
}

