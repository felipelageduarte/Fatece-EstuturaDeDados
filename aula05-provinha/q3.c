#include <stdio.h>
#include <stdlib.h>

int ***alocaMat3D(int n){
	int ***mat;

	int i, j, k;

	//aloca o vetor suporte
	mat = (int ***)malloc(n * sizeof(int **));

	//aloca a matriz suporte 
	for(i = 0; i < n; ++i){
		mat[i] = (int **)malloc(n * sizeof(int *));
		for(j = 0; j < n; ++j){
			//para cada elementa da matriz suporte aloca 
			//um vetor de dados inteiros
			mat[i][j] = (int *)malloc( n * sizeof(int));
			
			//para cada posicao deste novo vetor de dados
			//inicializa os elementos com -1
			for(k = 0; k < n; ++k){
				mat[i][j][k] = -1;
			}
		}
	}

	return mat;
}

void freeMat3D(int ***mat, int n){
	int i, j;

	for(i = 0; i < n; ++i){
		for(j = 0; j < n; ++j){
			free(mat[i][j]);//remove cada vetor de dados
		}
		free(mat[i]);//remover cada linha da matriz suporte
	}
	free(mat);//remove o vetor suporte final
}

int main(int argc, char *argv[]){

}
