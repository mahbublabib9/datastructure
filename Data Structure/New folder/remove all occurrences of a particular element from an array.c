#include <stdio.h>
void removeAll(int source[], int size, int element) {
int new_size = 0;
for (int i = 0; i < size; i++) {
if (source[i] != element) {
source[new_size] = source[i];
new_size++;
}
}
for (int i = new_size; i < size; i++) {
source[i] = 0;
}
}
int main() {
int source[] = {10, 2, 30, 2, 50, 2, 2, 0, 0};
int size = 9;
int element = 2;
removeAll(source, size, element);
for (int i = 0; i < size; i++) {
printf("%d ", source[i]);
}
return 0;
}
