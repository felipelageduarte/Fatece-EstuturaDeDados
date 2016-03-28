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
	
	//check if is alphabetic
	int sumAlpha=0, sumNum=0;
	
	for(i=0;i<count;i++){
		if(isalpha(vetor[i])){
			sumAlpha++;
		}
		if(isdigit(vetor[i])){
			sumNum++;
		}
	}

	printf("%d\n%d\n",sumAlpha,sumNum);
	

	free(vetor);	
	
	return 0;
}
