#include <stdio.h>

// Function to remove an element at a given index from an array
void removeElement(int source[], int size, int idx) {
    if (idx < 0 || idx >= size) {
        printf("Invalid index. Element not removed.\n");
        return;
    }

    // Shift elements to fill the gap left by the removed element
    for (int i = idx; i < size - 1; i++) {
        source[i] = source[i + 1];
    }

    // Set the last element to 0 (optional, but ensures the element is cleared)
    source[size - 1] = 0;
}

int main() {
    int source[] = {10, 20, 30, 40, 50, 0, 0};
    int size = 7; // Size of the array

    int idx = 2; // Index of the element to remove

    // Print the original array
    printf("Original array: [ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", source[i]);
    }
    printf("]\n");

    // Call the removeElement function to remove an element
    removeElement(source, size, idx);

    // Print the array after removing the element
    printf("Array after removal: [ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", source[i]);
    }
    printf("]\n");

    return 0;
}
