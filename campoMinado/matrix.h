#ifndef MATRIX_H
#define MATRIX_H

    #include <stdlib.h>

    typedef struct campo{
        //char -> [-128, 127]
        char type; // *  == -1
                  // .  == 0
                  // dn == 1..8

        //unsigned char -> [0..255]
        unsigned char aberto; 	// 0 = caso o campo esteja fechado
                                // 1 = caso o campo esteja aberto
    } CAMPO;

    double ***felipesDicas_M3D(int a, int c, int p);
    CAMPO **alocaMatrix(int l, int c);
    void freeMat(CAMPO **mat, int l);

#endif
