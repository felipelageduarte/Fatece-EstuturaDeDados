#include<stdio.h>

double soma(int n){
	double s=0;
	int i=0;
	for(i = 1; i <= n; ++i){
		s += (i)/(n-i+1);
	}
	return s;
}

int main(int argc, char *argv[]){
	
	return 0;
}
