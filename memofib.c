#include "memofib.h"

#include <stdio.h>


long long already_calculated[MAX_SIZE];
void initialize_array() {
  // Base cases
  already_calculated[0] = 0;
  already_calculated[1] = 1;
  for (int index = 2; index < MAX_SIZE; index++) {
    already_calculated[index] =
        already_calculated[index - 1] + already_calculated[index - 2];
  }
}

long long fibonacci(int x) {
  // Check bounds
  if (x < 0 || x >= MAX_SIZE) {
    return -1;
  }
  if (already_calculated[x] != -1) {
    return already_calculated[x];
  }
  return already_calculated[x];
}

int main() {
  initialize_array();
  run_tests();
  return 0;
}