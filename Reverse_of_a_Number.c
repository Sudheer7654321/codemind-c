#include <stdio.h>

int main() {

  int n, reverse = 0, r;

  scanf("%d", &n);

  while (n != 0) {
    r = n % 10;
    reverse = reverse * 10 + r;
    n /= 10;
  }

  printf("%d",reverse);

  return 0;
}