#include <assert.h>
#include <stdio.h>

#include "memofib.h"

long long test_fib(int x) {
  if (x == 0) return 0;
  if (x == 1) return 1;

  long long a = 0;
  long long b = 1;
  long long temp;

  for (int index = 2; index <= x; index++) {
    temp = a + b;
    a = b;
    b = temp;
  }
  return b;
}

void run_tests() {
  for (int index = 0; index < 92; index++) {
    long long expected = test_fib(index);
    long long result = fibonacci(index);
    if (result == expected) {
      printf("TEST %d: fib(%d) == %lld PASSED \n", index, index, expected);
    } else {
      printf("TEST %d: fib(%d) == %lld FAILED  (Got %lld)\n", index, index,
             expected, result);
    }
    assert(result == expected);
  }
  printf("\n All Tests Passed! \n");
}