#include "matrix.h"

double ***felipesDicas_M3D(int a, int c, int p){
      int i, j, k;
    
      double ***mat3D = (double ***)malloc(a * sizeof(double **));
      for(i = 0; i < a; ++i){
        mat3D[i] = (double **)malloc(c * sizeof(double *));
        for(j = 0; j < c; ++j){
            mat3D[i][j] = malloc(p * sizeof(double));
            for(k = 0; k < p; ++k){
                mat3D[i][j][k] = 0;
            }
        }
      } 
      
      return mat3D;
}

CAMPO **alocaMatrix(int l, int c){
  int i;
  CAMPO **mat;

  mat = (CAMPO **)malloc(l * sizeof(CAMPO *));
  for(i = 0; i < l; ++i)
    mat[i] = (CAMPO *)malloc(c * sizeof(CAMPO)); 

  return mat;
}

void freeMat(CAMPO **mat, int l){
    int i;
    for(i = 0; i < l; ++i){
        free(mat[i]);
    }
    free(mat);
}

