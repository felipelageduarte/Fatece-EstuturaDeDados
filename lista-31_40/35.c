#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *readLine(){
	char *str = NULL;
	char buff;
	int idx = 0;

	while((buff = getchar()) != '\n'){
		str = (char *)realloc(str, (idx + 1) * sizeof(char));
		str[idx] = buff;
		idx += 1;
	}

	str[idx] = '\0';
	
	return str;
}

int main(int argc, char *argv[]){

	char *str = readLine();
	char toFind = getchar();
	int counter = 0;
	int i;

	for(i = 0; i  < strlen(str); ++i){
		if(str[i] == toFind){
			counter+=1;
		}
	}

	printf("%d\n", counter);

	free(str);

	return 0;
}
