#include <stdio.h>

// Function to remove all occurrences of an element from an array
void removeAll(int source[], int size, int element) {
    int shift = 0; // Counter for shifting elements

    for (int i = 0; i < size; i++) {
        if (source[i] == element) {
            shift++; // Increment the shift counter for each occurrence of the element
        } else {
            source[i - shift] = source[i]; // Shift elements to fill the gaps
        }
    }

    // Fill the end of the array with 0s to match the new size
    for (int i = size - shift; i < size; i++) {
        source[i] = 0;
    }
}

int main() {
    int source[] = {10, 2, 30, 2, 50, 2, 2, 0, 0};
    int size = 9; // Size of the array

    int element = 2; // Element to be removed

    // Print the original array
    printf("Original array: [ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", source[i]);
    }
    printf("]\n");

    // Call the removeAll function to remove all occurrences of the element
    removeAll(source, size, element);

    // Print the array after removing all occurrences of the element
    printf("Array after removal: [ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", source[i]);
    }
    printf("]\n");

    return 0;
}
