#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap (char *x, char *y){
	char temp = *x;
	*x = *y;
	*y = temp;
}

void permute(char *str, int i, int n) {
	int j; 
	if (i == n){
		printf("%s\n", str);
	}else{
		for (j = i; j <= n; j++){
			swap((str+i), (str+j));
			permute(str, i+1, n);
			swap((str+i), (str+j));
		}	
	}
}

char *map(char *str){
	int size = strlen(str);
	char *map = (char*)malloc(size*sizeof(char));
	int i,j,encontrou=0;
	for(i=0;i<size;++i){
		encontrou = 0;
		
		for(j=0;j<strlen(map);++j){
			if(map[j] == str[i]) encontrou = 1;
		}
		
		if(encontrou == 0){ 
			map[strlen(map)] = str[i];
		}
	}
		
	return map;
}

void anagram(char *str){
	char *m = map(str);
	permute(m,0,strlen(m)-1);
	free(m);
}

int main(){
	char *str = (char *)malloc(30*sizeof(char));
	//printf("Forneca a string: ");
	scanf("%s",str);
	anagram(str);
	free(str);
	return 0;
}
