#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    int i, j, fator;
    float x, seno = 0.0, fatorial = 1.0;

    scanf("%f",&x);

    for(i = 0; i < 300; i++){
    	fator = 2*i+1;
    	
    	fatorial = 1;
    	for(j = 1; j <= fator; j++ ){
    		fatorial *= j;
    	}
        seno += pow(-1,i)*pow(x,fator)/fatorial;
    }

    printf("%.6lf",seno);
    return 0;
}
