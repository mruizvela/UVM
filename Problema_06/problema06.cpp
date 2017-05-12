#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
  int n, k;
  float pos = 0, neg = 0;

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &k);
    if (k < 0) {
      neg++;
    } else if (k > 0) {
      pos++;
    }
  }
  printf("%f\n%f\n%f", pos / n, neg / n, (n - pos - neg) / n);
  
  return 0;
}
