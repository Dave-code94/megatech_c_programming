#include <stdio.h>
#include <string.h>

// Function to find a substring s in source and return its starting index
int findString(const char *source, const char *s) {
  const char *found = strstr(source, s);
  if (found == NULL) {
    return -1;  // Return -1 if s is not found in source
  } else {
    return found - source;  // Return the starting index of s in source
  }
}

// Function to remove a substring s from source starting at position
void removeString(char *source, int position, int length) {
  memmove(source + position, source + position + length, strlen(source) - position - length + 1);
}

// Function to insert a substring insert into source at position
void insertString(char *source, const char *insert, int position) {
  memmove(source + position + strlen(insert), source + position, strlen(source) - position + 1);
  memcpy(source + position, insert, strlen(insert));
}

// Function to replace substring s1 with s2 inside source
void replaceString(char *source, const char *s1, const char *s2) {
  int pos = findString(source, s1);
  if (pos != -1) {
    removeString(source, pos, strlen(s1));
    insertString(source, s2, pos);
  }
}

int main() {
  char text[50] = "1 + 1 = 2";

  printf("Original text: %s\n", text);

  // Example usage of replaceString function
  replaceString(text, "1", "one");

  printf("Modified text: %s\n", text);  // Output should be "one + 1 = 2"

  replaceString(text, "*", "");

  printf("Modified text: %s\n", text);  // Output should be "one + 1 = 2" (no change)

  return 0;
}
