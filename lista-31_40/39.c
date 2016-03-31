#include <stdio.h>
#define TRUE 1
#define FALSE 0

int encaixa(int a, int b) {
  
  while (b != 0 && a % 10 == b % 10) {
    a = a/10;
    b = b/10;
  }

  if (b == 0)
    return TRUE;
  else
    return FALSE;

}

int main() {
  int a, b, subseq, maior, menor,aux;

  scanf("%d %d", &a, &b);
  
  if (a < b) {
    aux = a;
    a = b;
    b = aux;
  }  
  maior = a;
  menor = b;

  subseq = FALSE;
  while (maior >= menor) {
    if (encaixa(maior,menor) == TRUE)
      subseq = TRUE;
    maior = maior/10;
  }
  if (subseq == TRUE)
    printf("%d %d SIM\n",b,a);
  else
    printf("%d %d NAO\n",b,a);

  return 0;
}