
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include "matrix.h"


CAMPO **sortearBombas(CAMPO **tab, int l, int c, int numBombas){
    int i, j;
    int contadorBombas = 0;

    srand(time(NULL));

    while(contadorBombas != numBombas){
        //fornece uma posicao aleatoria dentro do meu tab
        i = rand()%l;
        j = rand()%c;

        if(tab[i][j].type == 0){
            tab[i][j].type = -1;
            contadorBombas++;
        }
    }

    return tab;
}

void printTab(CAMPO **tab, int l, int c){
    int i, j;
    
    printf("    ");
    for(i = 0; i < (l+4); ++i) printf("=");
    printf("\n");

    for(i = 0; i < l; ++i){
        printf("%3d ||", i);
        for(j = 0; j < c; ++j){
            if(tab[i][j].aberto == 1){
                if(tab[i][j].type == -1) printf("*");
                else if(tab[i][j].type ==  0) printf(".");
                else printf("%d", tab[i][j].type);
            }else{
                printf("X");
            }

        }
        printf("||\n");
    }
    
    printf("    ");
    for(i = 0; i < (l+4); ++i) printf("=");
    printf("\n");

}

CAMPO **dicasNumericas(CAMPO **tab, int l, int c){
    int i, j, k, w, contBombas;

    for(i = 0; i < l; ++i){
        for(j = 0; j < c; ++j){
            if(tab[i][j].type != -1){
                contBombas = 0;
                //percorrer a vizinhaca 1-anel contado quantas
                //bombas existem
                for(k = (i-1); k <= (i+1); ++k){
                    for(w = (j-1); w <= (j+1); ++w){
                        if(k >= 0 && k < l && w >= 0 && w < c){
                            if(tab[k][w].type == -1) contBombas++;
                        }
                    }
                }
                tab[i][j].type = contBombas;
            }
        }
    }
    return tab; 
}

CAMPO **inicializacao(int l, int c){
    int i, j;


    //alocacao da matrix do jogo
    CAMPO **tab = alocaMatrix(l, c);
    
    //inicializando o tabuleiro com casas vazias
    for(i = 0; i < l; ++i){
        for(j = 0; j < c; ++j){
            tab[i][j].type = 0;
            tab[i][j].aberto = 0;
        }
    }
    
    //sortear as bombas
    tab = sortearBombas(tab, l, c, 20);
    
    //dicas numericas
    tab = dicasNumericas(tab, l, c);

    return tab;
}

int main(int argc, char *argv[]){
    int l = 20, c = 20;
    
    CAMPO **tab = inicializacao(l, c);

    printTab(tab, l, c);
    
    //libera memoria alocada para a matriz
    freeMat(tab, l);
    
    return 0;
}
