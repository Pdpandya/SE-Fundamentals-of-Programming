#include <stdio.h>

int main() {
    int arr[] = {10, 23, 45, 7, 65, 32, 98};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0]; // Assume the first element as maximum

    //  array to find the maximum element
    for (int i = 1; i < size; i++) {
        int num = arr[i];
        if (num > max) {
            max = num; // Update max if current element is greater
        }
    }

    // Print the maximum number
    printf("The maximum number in the array is: %d\n", max);

    return 0;
}

