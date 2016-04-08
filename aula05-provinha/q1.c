#include<stdio.h>
#include<limits.h>

int main(int argc, char *argv[]){
	int max = INT_MIN, //inicializa a variavel max com o menor valor possivel
		min = INT_MAX; //inicializa a variavel min com o maior valor possivel
	int i, n, numb;

	//le a quantidade de numeros que sera fornecido
	scanf("%d",&n);

	//itera sobre o numero total de numeros que serao fornecido
	for(i = 0; i < n; ++i){
		scanf("%d",&numb);//le o numero fornecido pelo usuario

		//caso este numero seja maior que o max ate o presente momento
		//este numero deve ser considerado o novo maximo
		if(numb > max) max = numb;
		//de maneira analoga, caso o numero fornecido seja menor que min
		//ate o presente momento, este deve ser considerado o novo minimo
		if(numb < min) min = numb;
	}

	//imprime os valores encontrados
	printf("max: %d\n",max);
	printf("min: %d\n",min);

	return 0;
}
