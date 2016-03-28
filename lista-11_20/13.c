#include <stdio.h>
  
int main(){
	int n,i,j; 
	scanf("%d", &n);
	j=1;
	for (i = 0; i < n; ++i) {
		printf("%d\n",j);
		j+=2;
	}
	return 0;
}