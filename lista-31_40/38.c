#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

	int a, b;
	scanf("%d %d", &a, &b);
	
	int num = 0, 
		rest = 0;

	while(a >= b){
		a = a - b;
		num += 1;
	}
	rest = a;

	printf("%d\n%d\n",num, rest);

	return 0;
}
