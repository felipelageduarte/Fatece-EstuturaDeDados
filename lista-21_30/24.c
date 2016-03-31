#include <stdio.h>

int main() {
  float sum;
  int i, n;
  scanf ("%d", &n);
  sum = 0;
  for (i = 1; i <= n; i++){
    sum = sum + (float)(i)/(n-i+1);
  }
  
  printf("%.4f\n", sum);
  
  return 0;
}