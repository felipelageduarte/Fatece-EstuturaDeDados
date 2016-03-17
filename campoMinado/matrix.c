#include<stdio.h>

typedef struct campo{
	//char -> [-128, 127]
	char type; // *  == -1
			  // .  == 0
			  // dn == 1..8

	//unsigned char -> [0..255]
	unsigned char aberto; 	// 0 = caso o campo esteja fechado
							// 1 = caso o campo esteja aberto
} CAMPO;


int main(){

	CAMPO a;

	a.type   = -1;
	a.aberto = -1; 

	printf("%d %d\n", a.type, a.aberto);

	return 0;
}