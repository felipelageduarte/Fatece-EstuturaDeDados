#include <stdio.h>
#include <math.h>
  
int main(){
	int i,j; 
	for (i = 10; i < 100; ++i) {
		for (j = 0; j < 100; ++j) {
			if (sqrt(i*100 + j) == i + j) {
				printf("%d%02d\n",i,j);
			}
		}
	}
	return 0;
}