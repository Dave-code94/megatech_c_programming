#include <stdio.h>

int main() {
  float values[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};
  float sum = 0;
  int i;

  for (i = 0; i < 10; ++i) {
    sum += values[i];
  }

  float average = sum / 10;

  printf("The average is: %.2f\n", average);

  return 0;
}
