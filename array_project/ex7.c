#include <stdio.h>

#define N 150

int main() {
  int P[N+1];  // array to store prime status
  int i, j;

  // Step 1: Initialize array P
  for (i = 2; i <= N; i++) {
    P[i] = 0;  // assume all numbers are prime
  }

  // Step 2: Start from 2
  i = 2;

  while (i <= N) {
    // Step 4: If Pi is 0, then i is prime
    if (P[i] == 0) {
      printf("%d is prime\n", i);

      // Step 5: Mark multiples of i as non-prime
      for (j = i * i; j <= N; j += i) {
	P[j] = 1;  // mark as non-prime
      }
    }

    // Step 6: Move to the next number
    i++;

  }
    return 0;
  }
