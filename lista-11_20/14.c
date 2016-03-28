#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	int i;
	double x_0, r;
	int k;

	scanf("%lf %lf %d", &x_0, &r, &k);

	for(i = 1; i <= k; ++i){
		x_0 = r * x_0 * (1-x_0);
		printf("%d %lf\n",i, x_0);
	}

	return 0;
}
