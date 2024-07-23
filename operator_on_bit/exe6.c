#include <stdio.h>

int bitpat_search(unsigned int source, unsigned int pattern, int n)
{
  int source_bits = sizeof(unsigned int) * 8;
  unsigned int pattern_mask = (1u << n) - 1; 

  
  for (int i = 0; i <= source_bits - n; ++i) {
    unsigned int source_segment = (source >> (source_bits - n - i)) & pattern_mask;

    if (source_segment == pattern) {
      return i; 
    }
  }

  return -1;
}

int main()
{
  unsigned int source = 0xe1f4; 
  unsigned int pattern = 0x5;   
  int n = 3;

  int index = bitpat_search(source, pattern, n);

  if (index != -1) {
    printf("Pattern found at bit position: %d\n", index);
  } else {
    printf("Pattern not found.\n");
  }

  return 0;
}
