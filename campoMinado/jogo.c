
#include "jogo.h"


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

CAMPO **inicializacao(int l, int c, int nBombas){
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
    tab = sortearBombas(tab, l, c, nBombas);
    
    //dicas numericas
    tab = dicasNumericas(tab, l, c);

    return tab;
}

CAMPO **revelarMap(CAMPO **tab, int l, int c){
    int i, j;
    
    for(i = 0; i < l; ++i){
        for(j = 0; j < c; ++j){
            tab[i][j].aberto = 1;
        }
    }
    return tab;
}

CAMPO **abrirCampo(CAMPO **tab, int l, int c, int x, int y, int *perdeu){
    
    //este cenario as coordenadas fornecidas estao fora
    //do tabuleiro
    if(x < 0 || x >= l || y < 0 || y >= c || tab[y][x].aberto == 1){
        return tab;
    }


    if(tab[y][x].type == -1){
        tab = revelarMap(tab, l, c);
        (*perdeu) = 1;
    } else if(tab[y][x].type == 0){
        tab[y][x].aberto = 1;
        int i, j;
        for(i = y - 1; i <= y + 1; ++i){
            for(j = x - 1; j <= x +1; ++j){
                tab = abrirCampo(tab, l, c, j, i, perdeu);
            }
        }
    } else {
        tab[y][x].aberto = 1;
    }

    return tab;
}
