#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
	
	//leitura de number
	int number, rest, sum = 0;
	scanf("%d",&number);
	
	while(number > 10){
		sum = sum + number%10;
		number = number/10;
	}
	sum = sum + number;
	
	printf("%d",sum);

	return 0;
}
