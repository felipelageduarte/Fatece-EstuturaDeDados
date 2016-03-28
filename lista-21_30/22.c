#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
	double a1, r, n, an;
	scanf("%lf %lf %lf",&a1,&r,&n);
	an = a1 + (n-1)*r;
	printf("%.0lf\n",an);
	printf("%.0lf\n",((n*(a1 + an))/2));
	return 0;
}
