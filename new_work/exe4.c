#include <stdio.h>
#include <string.h>

void substring(const char *source, int start, int count, char *result) {
  int source_len = strlen(source);
  int i;

  
  if (start < 0) {
    start = 0;
  }

    if (start + count > source_len) {
    count = source_len - start;
  }

  
  for (i = 0; i < count; i++) {
    result[i] = source[start + i];
  }

  
  result[i] = '\0';
}

int main() {
  const char *source = "character";
  char result[20];  

  substring(source, 4, 3, result);
  printf("Substring extracted from '%s' starting at index 4 with length 3: '%s'\n", source, result);

  substring("two words", 4, 20, result); 
  printf("Substring extracted from 'two words' starting at index 4 with length 20: '%s'\n", result);

  return 0;
}
