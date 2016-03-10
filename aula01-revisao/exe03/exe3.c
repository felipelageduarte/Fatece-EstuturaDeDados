#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

	int a = 1;// variavel alocada na stack
	//char v[156831694604];
	char *v;
	int b = 2;// variavel alocada na stack
	
	//alocacao de memoria na heap
	//for(a = 0; a < 1000000; a++)
		v = malloc(156831694604);
	
	printf("a: End.: %p\tVal.: %d\n", &a, a);
	printf("v: End.: %p\n", &v);
	printf("b: End.: %p\tVal.: %d\n", &b, b);
	
	free(v);

	return 0;
}
