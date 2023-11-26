#include <stdio.h>

// Function to shift elements of an array to the right by 'k' positions
void shiftRight(int source[], int k, int size) {
    // Shift elements to the right
    for (int i = size - 1; i >= k; i--) {
        source[i] = source[i - k];
    }

    // Set the first 'k' elements to 0
    for (int i = 0; i < k; i++) {
        source[i] = 0;
    }
}

int main() {
    // Define the source array
    int source[] = {10, 20, 30, 40, 50, 60};
    int k = 3; // Number of cells to shift
    int size = sizeof(source) / sizeof(source[0]); // Calculate the size of the array

    // Print the original array
    printf("Original array: [ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", source[i]);
    }
    printf("]\n");

    // Call the shiftRight function to shift the elements
    shiftRight(source, k, size);

    // Print the shifted array
    printf("After shifting: [ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", source[i]);
    }
    printf("]\n");

    return 0;
}
