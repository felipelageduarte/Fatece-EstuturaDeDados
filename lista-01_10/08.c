/* EXERCICIO SUBMETIDO PELO ESTATIARIO PAE
FABIO SIKANSI
*/
#include <stdio.h>

int main(void) {
	long int a,b,c,h,catetos;
	scanf("%ld %ld %ld",&a,&b,&c);
	if (a ==0 || b == 0 || c == 0) {
		printf("NAO");
		return 0;
	} 
	h = a*a;
	catetos = b*b + c*c;
	if (b*b > h) {
		h = b*b;
		catetos = a*a + c*c;
	}
	if (c*c > h) {
		h = c*c;
		catetos = a*a + b*b;
	} 
	if (catetos == h) {
		printf("SIM");
	} else {
		printf("NAO");
	}
	return 0;
}
