#include <stdio.h>
#include <string.h>
#include <stdbool.h> 


int findString(const char *source, const char *s) {
  const char *found = strstr(source, s);
  if (found == NULL) {
    return -1;  
  } else {
    return found - source;  
  }
}


void removeString(char *source, int position, int length) {
  memmove(source + position, source + position + length, strlen(source) - position - length + 1);                                                           }            
void insertString(char *source, const char *insert, int position) {
  memmove(source + position + strlen(insert), source + position, strlen(source) - position + 1);
  memcpy(source + position, insert, strlen(insert));
}


int replaceString(char *source, const char *s1, const char *s2) {
  int pos = findString(source, s1);
  if (pos != -1) {
    removeString(source, pos, strlen(s1));
    insertString(source, s2, pos);
    return 1;  
  }
  return 0;  
}

int main() {
  char text[50] = "1 + 2 + 3";

  printf("Original text: %s\n", text);

  
  int stillFound;
  do {
    stillFound = replaceString(text, " ", "");
  } while (stillFound);

  printf("Modified text (spaces removed): %s\n", text);  

  
  replaceString(text, "2", "two");
  printf("Modified text (2 replaced with two): %s\n", text);  

  
  int replaced = replaceString(text, "4", "four");
  if (replaced) {
    printf("Modified text: %s\n", text);  
  } else {
    printf("\"4\" not found in text, no replacement made.\n");
  }

  return 0;
}
