#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define FALSE 0
#define TRUE 1

int main(int argc, char *argv[]){
	char *str = (char *)malloc(3000*sizeof(char));
	int palindromo = TRUE;
	int i, len;

	scanf("%s",str);

	len = strlen(str);

	for(i = 0; i < len/2; ++i){
		if(str[i] != str[len-i-1]){
			palindromo = FALSE;
			break;
		}
	}

	if(palindromo == TRUE) printf("SIM");
	else printf("NAO");

	free(str);
	return 0;
}
