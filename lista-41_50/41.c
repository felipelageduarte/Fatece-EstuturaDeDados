#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[]){
	int maior = 0,vendidos,i;
	int dias[31];
	int numdiasmaiores = 0;
	int diaslidos = 0;
	while (diaslidos < 31) {
		scanf("%d",&vendidos);
		diaslidos++;
		if (vendidos > maior) {
			maior = vendidos;
			dias[0] = diaslidos;
			numdiasmaiores = 1;
		} else if (vendidos == maior) {
			dias[numdiasmaiores] = diaslidos;
			numdiasmaiores++;
		}
	}

	printf("%d\n", maior);
	for (i=0; i < numdiasmaiores; ++i) {
		printf("%d\n", dias[i]);
	}
}