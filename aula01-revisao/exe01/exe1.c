#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

	int a = 1;// variavel alocada na stack
	int b = 2;// variavel alocada na stack
	
	printf("a: End.: %p\tVal.: %d\n", &a, a);
	printf("b: End.: %p\tVal.: %d\n", &b, b);

	return 0;
}
