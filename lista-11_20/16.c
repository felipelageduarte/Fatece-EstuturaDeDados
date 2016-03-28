#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[]){
	int seq[1001];
	int count,i;

	scanf ("%d",&count);

	for (i = 0; i < count; ++i) {
		scanf ("%d",&seq[i]);
	}

	for (i = count-1; i >= 0; --i) {
		printf ("%d\n",seq[i]);
	}

	return 0;
}
