#include<stdio.h>
#include<stdlib.h>

int **aloca(int n){

	int i,j;
	int **mat = (int **)malloc(n*sizeof(int *));
	for(i=0;i<n;++i)
		mat[i] = (int *)malloc(n*sizeof(int));

	for(i=0;i<n;++i)
		for(j=0;j<n;++j)
			scanf("%d",&mat[i][j]);

	return mat;
}

int soma(int **mat, int size){

	int i,j,soma=0;

	for(i=0;i<size;++i)
		for(j=0;j<size;++j)
			if(j>i) soma += mat[i][j];

	return soma;
}

void freeMem(int **mat, int size){
	int i;
	for(i=0;i<size;++i)
		free(mat[i]);
	free(mat);
}

int main(int argc, char *argv[]){
	int **mat, size = 3;
	mat = aloca(size);
	printf("soma: %d\n",soma(mat,size));
	freeMem(mat,size);
	
	return 0;
}
