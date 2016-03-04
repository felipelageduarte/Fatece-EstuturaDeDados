#include<stdio.h>
#include<stdlib.h>

int pow2(int x, int y){
	int i;
	int result = 1;
	for(i=0;i<y;++i){
		result *= x;
	}
	return result;
}    

int main(int argc, char *argv[]){
	int numb, exp, result;

	printf("Forneca o numero e o expoente: ");
	scanf("%d %d",&numb, &exp);
	result = pow2(numb,exp);
	printf("%d^%d = %d\n",numb,exp,result);

	return 0;
}
