#include <stdio.h>
#include <stdbool.h>
bool hasDuplicateRepetitions(int arr[], int size) {
int i, j;
bool foundDuplicate = false;
for (i = 0; i < size; i++) {
int count = 0;
for (j = 0; j < size; j++) {
if (arr[i] == arr[j]) {
count++;
foundDuplicate = true;
}
}
return foundDuplicate;
}
int main() {
    int input1[] = {4, 5, 6, 6, 4, 3, 6, 4};
    int input2[] = {3, 4, 6, 3, 4, 7, 4, 6, 8, 6, 6};
    bool result1 = hasDuplicateRepetitions(input1, sizeof(input1) / sizeof(input1[0]));
    bool result2 = hasDuplicateRepetitions(input2, sizeof(input2) / sizeof(input2[0]));
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
