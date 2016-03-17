#include <stdio.h>
#include <math.h>

int main() {
  float 
    a, b, c,           /* coeficientes da equacao     */
    delta, rdelta,       
    parte_real,        /* parte real das raizes       */
    parte_imaginaria,  /* parte imaginaria das raizes */
    raiz1, raiz2;      /* raizes, caso sejam reais    */

  int 
    raizes;            /* indica de que tipo sao as raizes */
    scanf("%f %f %f",&a, &b, &c);

    /* calculo do delta da equacao */
    delta = b*b-4*a*c;

    if (delta > 0) {
      /* a equacao tem raizes reais */
      rdelta = sqrt(delta);

      raiz1 = (-b+rdelta)/(2*a);
      raiz2 = (-b-rdelta)/(2*a);
      printf("REAIS\n");
      printf("R1 %f\n", raiz1);
      printf("R2 %f\n", raiz2);
    }
    else if (delta < 0) {
      /* a equacao tem raizes complexas */
      rdelta = sqrt(-delta);
      parte_real = -b/(2*a);
      parte_imaginaria = rdelta/(2*a);
      printf("COMPLEXAS\n");
      printf("R %f\n", parte_real);
      printf("I %f\n", parte_imaginaria);
    }
    else {
      /* a equacao tem raiz dupla */
      printf("DUPLA \nRD %f\n", -b/(2*a));
    }

    return 0;
}