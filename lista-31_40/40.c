#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	
	//leitura do vetor
	char *vetor=NULL;
	int count=0,i;
	char ch;

	do{
		ch = getc(stdin);
		if(ch != '\n'){
			vetor = (char *) realloc(vetor, (sizeof(char)*(count+1)));
			vetor[count] = ch;
			count++;
		}
	}while(ch != '\n');
		
	for(i=0;i<count;i++){
		printf("%c\n",vetor[i]);
	}

	free(vetor);	
	
	return 0;
}
