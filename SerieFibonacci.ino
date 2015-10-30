#include <stdio.h>

int main() {
  int f1, f2, fibo, i;
  f1 = 0;
  f2 = 1;
  printf("0, 1");
  for (i = 0; i < 4; i++) {
    fibo = f1 + f2;
    printf(", %d", fibo);
    f1 = f2;
    f2 = fibo;
  }
  return 0;
}
