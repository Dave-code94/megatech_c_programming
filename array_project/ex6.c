#include <stdio.h>

int main(void)
{
  int fib1 = 0, fib2 = 1, fib;
  int i;

  printf("%i ", fib1); 
  printf("%i ", fib2); 

  for (i = 2; i < 10; ++i)
    {
      fib =fib1 + fib2;
      printf("%i ", fib);

      fib1 = fib2;
      fib2 = fib;
    }

  printf("\n");
  return 0;
}
