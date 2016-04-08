#include<stdio.h>
#include<stdlib.h>

int **alocaMat(int n, int m){

	int i;
	int **mat = (int **)malloc(n *sizeof(int *));
	for(i = 0; i < n; ++i){
		mat[i] = (int *)calloc(m, sizeof(int));
	}

	return mat;
}

int **readMat(int **mat, int n, int m){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d",&mat[i][j]);
		}
	}
	return mat;
}

void freeMat(int **mat, int n){
	int i;
	for(i = 0; i < n; ++i)
		free(mat[i]);
	free(mat);
}

int isMagicSquare(int **mat, int n, int m){
	if(n != m) return 0;

	int i, j;	
	int soma = 0;
	int soma_aux;

	//calcula o valor da soma da diagonal principal
	for(i = 0; i < n; i++)
		soma += mat[i][i];

	soma_aux = 0;
	//compara com a outra diagonal
	for(i = 0; i < n; i++)
		soma_aux += mat[i][n-1-i];

	if(soma != soma_aux) return 0;

	//verifica as linhas
	for(i = 0; i < n; i++){
		soma_aux = 0;
		for(j = 0; j < m; j++){
			soma_aux += mat[i][j];
		}
		if(soma != soma_aux) return 0;
	}
	
	//verifica as colunas
	for(j = 0; j < m; j++){
		soma_aux = 0;
		for(i = 0; i < n; i++){
			soma_aux += mat[i][j];
		}
		if(soma != soma_aux) return 0;
	}

	return 1;
}

int main(int argc, char *arv[]){

	int n;
	scanf("%d", &n);
	int **mat = alocaMat(n,n);
	mat = readMat(mat, n, n);
	if(isMagicSquare(mat, n, n)){
		printf("SIM\n");
	} else { 
		printf("NAO\n");
	}
	
	freeMat(mat,n);

	return 0;
}
