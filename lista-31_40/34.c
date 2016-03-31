#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

	int buffer;
	int *counter = (int *)calloc(7,sizeof(int));
	int max = -1;
	int i;

	while(scanf("%d",&buffer) != EOF){
		counter[buffer]++;
		if(counter[buffer] > max) max = counter[buffer];
	}

	for(i = 1; i <= 6; i++){
		if(counter[i] == max){
			printf("%d\n", i);
		}
	}
	printf("%d\n",max);

	return 0;
}
