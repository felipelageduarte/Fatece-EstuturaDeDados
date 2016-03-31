#include <stdio.h>

int main(void) {
	double a,b,c,d,min;
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	if (d < min) min = d;
	printf("%.4f",(a+b+c+d-min)/3);
	return 0;
}
