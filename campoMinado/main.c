#include<stdio.h>
#include<stdlib.h>

void printMenu(){
	system("clear");
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
		//imprime o menu na tela
		printMenu();

		//le a opcao fornecida pelo usuario
		scanf("%c", &opt);

		//Observe que a opcao foi lida com caracter
		//para caso o usuario digite um valor nao
		//numerico o programa nao trave

		//caso o usuario digite uma das opcoes abaixo
		//retorne o valor numerico digitado
		switch(opt){
			case '1':
				optNum = 1;
				stopLoop = 1;
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
