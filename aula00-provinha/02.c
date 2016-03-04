#include<stdio.h>
#include<stdlib.h>

void bin(int numb){
	if(numb <= 1) printf("%d",numb);
	else{
		bin(numb/2);
		printf("%d",numb%2);
	}
}

int main(int argc, char *argv[]){
	int numb;
	
	printf("Forneca o numero: ");
	scanf("%d",&numb);
	printf("%d = ",numb);
	bin(numb);
	printf("\n");
	return 0;
}
