#include <stdio.h>
#include <stdbool.h>

// Function to check for duplicate repetitions
bool hasDuplicateRepetitions(int arr[], int size) {
    int i, j;
    bool foundDuplicate = false;

    for (i = 0; i < size; i++) {
        int count = 0; // Initialize count for the current element

        for (j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++; // Count occurrences of the current element
            }
        }

        if (count >= 2) {
            foundDuplicate = true; // If more than one repetition is found, set the flag and break
            break;
        }
    }

    return foundDuplicate;
}

int main() {
    // Sample input arrays
    int input1[] = {4, 5, 6, 6, 4, 3, 6, 4};
    int input2[] = {3, 4, 6, 3, 4, 7, 4, 6, 8, 6, 6};

    // Check for duplicate repetitions and store the result
    bool result1 = hasDuplicateRepetitions(input1, sizeof(input1) / sizeof(input1[0]));
    bool result2 = hasDuplicateRepetitions(input2, sizeof(input2) / sizeof(input2[0]));

    // Display the results
    if (result1) {
        printf("Output for input1: True\n");
    } else {
        printf("Output for input1: False\n");
    }

    if (result2) {
        printf("Output for input2: True\n");
    } else {
        printf("Output for input2: False\n");
    }

    return 0;
}
