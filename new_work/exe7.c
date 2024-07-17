#include <stdio.h>
#include <string.h>

void insertString(char *source, const char *insert, int position) {
  
  int source_len = strlen(source);

  
  int insert_len = strlen(insert);

  
  if (position < 0 || position > source_len) {
    printf("Error: Position %d is out of bounds for source string of length %d.\n", position, source_len);
    return;
  }

  
  int new_len = source_len + insert_len;

  
  memmove(source + position + insert_len, source + position, source_len - position + 1);

  
  memcpy(source + position, insert, insert_len);
}

int main() {
  char text[50] = "the wrong son";

  printf("Original text: %s\n", text);

 
  insertString(text, "per", 10);

  printf("Modified text: %s\n", text);  
}
  return 0;

}
