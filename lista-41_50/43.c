#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int questions,students,i,j,count=0;
	char aux;

	scanf("%d",&questions);
	scanf("%d",&students);

	char corrects[questions];
	char answers[questions][students];
	double grades[students];

	scanf("%c",&aux);
	for (i=0; i<questions; i++) {
		scanf("%c",&corrects[i]);
	}
	for (i=0; i<students; i++) {
		scanf("%c",&aux);
		for (j=0; j<questions; j++) {
			scanf("%c",&answers[j][i]);
		}
	}

	for (i=0; i<students; i++) {
		count=0;
		for (j=0; j<questions; j++) {
			if (answers[j][i] == corrects[j]) {
				count++;
			}
		}
		grades[i] = (double)count * 10.0/(double)questions;
	}

	for (i=0; i<students; i++) {
		printf("%.2f\n",grades[i]);
	}



	return 0;
}
