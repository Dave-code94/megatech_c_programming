#include <stdio.h>
#include <stdint.h>


  int right_shift(int x) {
  return x >> 1;
}


int is_arithmetic_right_shift() {
  int x = -1;  

  
  int shifted = right_shift(x);

  
  if (shifted < 0) {
    return 1;  
  } else {
    return 0;  
  }
}

int main() {
  if (is_arithmetic_right_shift()) {
    printf("Your computer performs an arithmetic right shift.\n");
  } else {
    printf("Your computer performs a logical right shift.\n");
  }

  return 0;
}
