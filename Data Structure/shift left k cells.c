#include <stdio.h>

void shiftLeft(int source[], int k, int size) {
    for (int i = 0; i < size - k; i++) {
        source[i] = source[i + k];
    }

    for (int i = size - k; i < size; i++) {
        source[i] = 0;
    }
}

int main() {
    int source[] = {10, 20, 30, 40, 50, 60};
    int k = 3;
    int size = sizeof(source) / sizeof(source[0]);

    printf("Before shifting: [ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", source[i]);
    }
    printf("]\n");

    shiftLeft(source, k, size);

    printf("After shifting: [ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", source[i]);
    }
    printf("]\n");

    return 0;
}
