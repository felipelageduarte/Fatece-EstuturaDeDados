#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

	double a, b;
	char f;

	scanf("%lf %c %lf",&a, &f, &b);
	switch(f){
		case '+':
			printf("%lf",a+b);
			break;
		case '-':
			printf("%lf",a-b);
			break;
		case '*':
			printf("%lf",a*b);
			break;
		case '/':
			printf("%lf",a/b);
			break;
		case '%':
			printf("%lf",(a/b)*100);
			break;
	}

	return 0;
}
