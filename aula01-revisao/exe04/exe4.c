#include<stdio.h>
#include<stdlib.h>

/*
(
Quem tiver problema com o stdlib e stdio

sudo apt-get install gcc
sudo apt-get install g++
)
*/


int main(int argc, char *argv[]){

	int a = 1;// variavel alocada na stack
	//char v[156831694604];
	int *v;
	float *v2;
	double *v3;
	int b = 2;// variavel alocada na stack
	
	//alocacao de memoria na heap
	//v = malloc(40 * 1);//aloca 40 chars
	v  = (int *)malloc(41 * sizeof(int));//aloca 40 chars
 	v2 = (float *)malloc(51 * sizeof(float));	
	v3 = (double *)malloc(100 * sizeof(double));	
	
	v[0] = 42342;
	v[1] = 321;
	
	printf("a: End.: %p\tVal.: %d\n", &a, a);
	printf("v: End.: %p\n", &v);
	printf("b: End.: %p\tVal.: %d\n", &b, b);
	
	free(v);
	free(v2);
	free(v3);

	return 0;
}
