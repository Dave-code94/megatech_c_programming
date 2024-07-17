#include <stdio.h>
#include <string.h>


int findString(const char *source, const char *s) {
  const char *found = strstr(source, s);
  if (found == NULL) {
    return -1;  
  } else {
    return found - source;  
  }
}

int main() {
  const char *source = "a chatterbox";
  const char *search = "hat";

  int index = findString(source, search);

  if (index != -1) {
    printf("'%s' found in '%s' at index: %d\n", search, source, index);
  } else {
    printf("'%s' not found in '%s'\n", search, source);
  }

  return 0;
}
