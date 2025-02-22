#include <stdio.h>
#define MAX_SIZE 100

int already_calculated[MAX_SIZE];

void initialize_array() {
    for (int index = 0; index < MAX_SIZE; index++) {
        already_calculated[index] = -1;
    }
}

int fibonacci(int x) {
  if (x == 0) {
    return 0;
  }
  if (x == 1) {
    return 1;
  }
  if (already_calculated[x] != -1) {
    return already_calculated[x];
  }

  // Store and calculate
  already_calculated[x] = fibonacci(x-1) + fibonacci(x - 2);
  return already_calculated[x];
}


int main() {
    initialize_array();
    printf("%d\n", fibonacci(5));
    return 0;
}