#include <stdio.h>

int main() {
  int size = 5;
  int arr[size]; // Variable-length array

  for (int i = 0; i < size; i++) {
    arr[i] = i * 2; // Initialize the array
  }

  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]); // Print the array
  }

  printf("\n");

  return 0;
}
