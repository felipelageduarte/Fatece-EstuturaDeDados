#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

	int a = 1;// variavel alocada na stack
	char v[156831694604];
	int b = 2;// variavel alocada na stack
	
	printf("a: End.: %p\tVal.: %d\n", &a, a);
	printf("v: End.: %p\n", &v);
	printf("b: End.: %p\tVal.: %d\n", &b, b);

	return 0;
}
