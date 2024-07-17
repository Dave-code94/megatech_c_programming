#include <stdio.h>

// Function to calculate the length of a string
int stringLength(const char *str) {
  int length = 0;
  while (str[length] != '\0') {
    length++;
  }
  return length;
}

// Function to remove characters from a string
void removeString(char *source, int startIndex, int numToRemove) {
  int sourceLength = stringLength(source);

  // Check if startIndex is valid
  if (startIndex < 0 || startIndex >= sourceLength) {
    printf("Error: Invalid startIndex\n");
    return;
  }

  // Check if numToRemove is valid
  if (numToRemove <= 0 || startIndex + numToRemove > sourceLength) {
    printf("Error: Invalid numToRemove\n");
    return;
  }

  // Calculate the new length after removing characters
  int newLength = sourceLength - numToRemove;

  // Shift characters left to overwrite the removed characters
  for (int i = startIndex; i <= newLength; i++) {
    source[i] = source[i + numToRemove];
  }

  // Null-terminate the string at the new length
  source[newLength] = '\0';
}

int main() {
  char text[] = "the wrong son";

  // Print original string
  printf("Original string: %s\n", text);

  // Remove characters starting from index 4, remove 6 characters
  removeString(text, 4, 6);

  // Print modified string
  printf("Modified string: %s\n", text);

  return 0;
}
