#include <stdio.h>

int main(void) {
	int year;
	scanf("%d",&year);
	if (year % 4 == 0) {
		printf("SIM");
	} else {
		printf("NAO");
	}
	return 0;
}
