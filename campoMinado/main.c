#include<stdio.h>
#include<stdlib.h>
#include "matrix.h"
#include "jogo.h"

void jogo(){
    
    int l = 20, 
        c = 20;
    int nBombas = 20;
    int x, y;
    int fim = 0;

    CAMPO **tab = inicializacao(l, c, nBombas);
    while(!fim){
        system("cls || clear");
        printTab(tab, l, c);
        printf("Forneca as coord (x,y) do campo: ");
        scanf("%d %d", &x, &y);
        
        //caso o usuario digite uma coordenada negativa
        //saia do laco e termine o jogo
        if(x == -1 || y == -1) break;

        
        tab = abrirCampo(tab, l, c, x, y, &fim);

        if(fim){
            printTab(tab, l, c);
            printf("Perdeu!!!!\n");
            sleep(2);
        }
    }
    //libera memoria alocada para a matriz
    freeMat(tab, l);
}

void printMenu(){
	printf("\n\n\n=================================================\n\n");
	printf("\t\t1) Iniciar o jogo\n");
	printf("\t\t2) ???\n");
	printf("\n\t\t0) Sair do jogo\n");
	printf("\t\tSelecione a opcao desejada:");
}

int menu(){

	char opt;
	char stopLoop = 0;
	char optNum = -1;
	
	do{
        system("cls || clear");
        //imprime o menu na tela
		printMenu();

		//le a opcao fornecida pelo usuario
		scanf("%c", &opt);
        system("cls || clear");

		//Observe que a opcao foi lida com caracter
		//para caso o usuario digite um valor nao
		//numerico o programa nao trave

		//caso o usuario digite uma das opcoes abaixo
		//retorne o valor numerico digitado
		switch(opt){
			case '1':
				optNum = 1;
				jogo();    
                break;
			case '0':
				optNum = 0;
				stopLoop = 1;
				break;
		}
	}while(stopLoop == 0);

	return optNum;
}


int main(int argc, char *argv[]){

	int opt = menu();

	if(opt == 1){
		//iniciar o jogo
	}

	return 0;
}
