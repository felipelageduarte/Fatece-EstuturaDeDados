#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxTamanho 3

int main(int argc, char* argv[]){
	
	//leitura do vetor
	FILE *fp;
	int tamanho = maxTamanho*maxTamanho;
	char matriz[maxTamanho][maxTamanho];
	int lin=0,col=0,count=0;
	char ch;
	int i,j;
	int JogadorId = 0;
	int ganhador = -1;
	
	//printf("Começa com Jogador = %d\n", JogadorId);
	
	//inicializa matriz com letra qualquer != de X e O
	for(i=0;i<maxTamanho;i++){
		for(j=0;j<maxTamanho;j++){
			matriz[i][j] = 'N';
		}	
	}
	
	do{
		scanf("%d",&lin);
		ch = getc(stdin);
		scanf("%d",&col);
		ch = getc(stdin);
		
		//printf("Iteracao %d\n\n",count);
		
		matriz[lin][col] = JogadorId == 0 ? 'X' : 'O';
		
		//verifica se existe ganhador
		//linha
		for(j=0;j<maxTamanho;j++){
			i=0;
			while((matriz[i][j] != 'N') && (matriz[i][j] == matriz[i+1][j]) && (i<maxTamanho)) i++;
			if(i == (maxTamanho-1)){
				//printf("%d ganhou na linha %d\n", JogadorId,i);
				ganhador = JogadorId;
				break;
			}
		}
		//coluna
		for(i=0;i<maxTamanho;i++){
			j=0;
			while((matriz[i][j] != 'N') && (matriz[i][j] == matriz[i][j+1]) && (j<maxTamanho)) j++;
			if(j == (maxTamanho-1)){
				//printf("%d ganhou na coluna %d\n", JogadorId,j);
				ganhador = JogadorId;
				break;
			}
		}
		// diagonal principal
		i=0;
		j=0;
		while((matriz[i][j] != 'N') && (matriz[i][j] == matriz[i+1][j+1]) && (i<maxTamanho)){
			 j++;
			 i++;
		}
		if(j == (maxTamanho-1)){
			//printf("%d ganhou diagonal principal\n", JogadorId);
			ganhador = JogadorId;
		}
		//outra diagonal
		i=0;
		j=maxTamanho-1;
		while((matriz[i][j] != 'N') && (matriz[i][j] == matriz[i+1][j-1]) && (i<maxTamanho)){
			 j--;
			 i++;
		}
		if(i == (maxTamanho-1)){
			//printf("%d ganhou outra diagonal\n", JogadorId);
			ganhador = JogadorId;
		}
		
		/*for(i=0;i<maxTamanho;i++){
			for(j=0;j<maxTamanho;j++){
				printf("%c | ",matriz[i][j]);
			}
			printf("\n--------------\n");
		}*/
	
		//troca o jogador	
		count++;
		if(ch == '\n'){
			JogadorId = JogadorId == 0 ? 1 : 0;
			//printf("Mudando Jogador = %d\n", JogadorId);
		}
		
		
	}while(count < tamanho && ganhador == -1);
	
	/*for(i=0;i<maxTamanho;i++){
		for(j=0;j<maxTamanho;j++){
			printf("%c | ",matriz[i][j]);
		}
		printf("\n--------------\n");
	}*/
	
	if (ganhador == -1)
	   printf("empate\n");
	else
	   printf("%d\n",ganhador);
	
	return 0;
}
