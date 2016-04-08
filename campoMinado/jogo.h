#ifndef JOGO_H
#define JOGO_H

    #include<stdio.h>
    #include<stdlib.h>
    #include<time.h>

    #include "matrix.h"


    CAMPO **sortearBombas(CAMPO **tab, int l, int c, int numBombas);
    void printTab(CAMPO **tab, int l, int c);
    CAMPO **dicasNumericas(CAMPO **tab, int l, int c);
    CAMPO **inicializacao(int l, int c, int nBombas);
    CAMPO **abrirCampo(CAMPO **tab, int l, int c, int x, int y, int *perdeu);

    /*
    int main(int argc, char *argv[]){
        int l = 20, c = 20;
        
        CAMPO **tab = inicializacao(l, c);

        printTab(tab, l, c);
        
        //libera memoria alocada para a matriz
        freeMat(tab, l);
        
        return 0;
    }
    */
#endif
