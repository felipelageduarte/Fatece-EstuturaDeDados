#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char *argv[]){
	int i;
	int size = 0;
	char *str = (char *)malloc(100*sizeof(char));
	char **name = NULL;

	while(scanf("%s", str) != EOF){
		size += 1;
		name = (char **)realloc(name,size * sizeof(char *));
		name[size - 1] = str;
		str = (char *)malloc(100*sizeof(char));
	}

	for(i = 0; i < strlen(name[size -1]); ++i){
		printf("%c", toupper(name[size-1][i]));
	}
	printf(",");

	for(i=0; i < size-1; i++){
		printf(" %s", name[i]);
	}
	printf("\n");

	for(i =0; i < size; ++i)
		free(name[i]);
	free(name);
	free(str);
	return 0;
}
