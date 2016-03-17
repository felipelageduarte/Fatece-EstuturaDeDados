#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    int i, n, num;
	int max = -9999999, min = 9999999;

    scanf("%d",&n);

    for(i = 0; i < n; i++){
		scanf("%d",&num);
		if(num > max) max = num;
		if(num < min) min = num;		
    }

    printf("max: %d\n",max);
	printf("min: %d\n",min);
    
	return 0;
}
