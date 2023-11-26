#include <stdio.h>
void rotateRight(int source[], int k, int size) {
int temp[k];
for (int i = size - k; i < size; i++) {
temp[i - (size - k)] = source[i];
}
for (int i = size - k - 1; i >= 0; i--) {
source[i + k] = source[i];
}
for (int i = 0; i < k; i++) {
source[i] = temp[i];
}
}
int main() {
int source[] = {10, 20, 30, 40, 50, 60};
int k = 3;
int size = sizeof(source) / sizeof(source[0]);
printf("Original array: [ ");
for (int i = 0; i < size; i++) {
printf("%d ", source[i]);
}
printf("]\n");
rotateRight(source, k, size);
printf("After rotating: [ ");
for (int i = 0; i < size; i++) {
printf("%d ", source[i]);
}
printf("]\n");
return 0;
}
