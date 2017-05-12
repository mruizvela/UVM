#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
  int n, k;
  scanf("%d", &n);

  int total = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &k);
      if (i == j)
        total += k;
      if (i == n - j - 1)
        total -= k;
    }
  }
  printf("%d", abs(total));
  return 0;
}