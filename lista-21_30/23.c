#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[]){
	float a1, q, n, an;
	scanf("%f %f %f",&a1,&q,&n);
	an = a1 * pow(q,n-1);
	printf("%.2f\n",an);
	printf("%.2f\n",((a1*(1-pow(q,n)))/(1-q)));
	return 0;
}
