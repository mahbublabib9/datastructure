#include <stdio.h>

// Function to rotate elements of an array to the right by 'k' positions
void rotateRight(int source[], int k, int size) {
    int temp[k]; // Temporary array to store the last 'k' elements

    // Copy the last 'k' elements to the temporary array
    for (int i = size - k; i < size; i++) {
        temp[i - (size - k)] = source[i];
    }

    // Shift the remaining elements to the right
    for (int i = size - k - 1; i >= 0; i--) {
        source[i + k] = source[i];
    }

    // Copy the elements from the temporary array back to the beginning of the source array
    for (int i = 0; i < k; i++) {
        source[i] = temp[i];
    }
}

int main() {
    // Define the source array
    int source[] = {10, 20, 30, 40, 50, 60};
    int k = 3; // Number of cells to rotate
    int size = sizeof(source) / sizeof(source[0]); // Calculate the size of the array

    // Print the original array
    printf("Original array: [ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", source[i]);
    }
    printf("]\n");

    // Call the rotateRight function to rotate the elements
    rotateRight(source, k, size);

    // Print the rotated array
    printf("After rotating: [ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", source[i]);
    }
    printf("]\n");

    return 0;
}
