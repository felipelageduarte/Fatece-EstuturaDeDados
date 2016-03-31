#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, char *argv[]){

	int n;
	int i;
	int lowerCaseCounter = 0;
	int upperCaseCounter = 0;
	char buffer[10];
	
	scanf("%d",&n);

	for(i=0; i<n; i++){
		scanf("%s",buffer);
		if(islower(buffer[0]))
			lowerCaseCounter += 1;
		else
			upperCaseCounter += 1;
	}

	printf("%d %d\n", upperCaseCounter, lowerCaseCounter);
	return 0;
}
