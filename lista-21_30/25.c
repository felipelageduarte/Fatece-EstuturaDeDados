#include <stdio.h>

int main(int argc, char* argv[]){
	
	//leitura de m
	int m;
	scanf("%d",&m);
	
	int impar = 1;
	int n = 1;
	
	// quantidade de potencias (m)
	//nao sei se m pode ser negativo
	while(n <= abs(m)){
		//resultado da potencia (n^3)
		int sum=0,j;
		for(j=0;j<n;j++){
			sum = sum + impar;
			printf("%d ", impar);
			impar = impar + 2;
		}
		printf("\n");
		n++;
	}

	return 0;
}
