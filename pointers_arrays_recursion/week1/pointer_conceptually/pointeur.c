#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x = 3;
  int *p;
  p = &x;
  *p = 4;
  int y = *p;
  int *q = &y;
  *q = *p + 1;
  q = p;
  return EXIT_SUCCESS;
}
