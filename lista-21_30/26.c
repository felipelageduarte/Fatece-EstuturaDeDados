#include <stdio.h>
#include <math.h>
  
int main(){
	int i,n; 
	float sumLow,grade;
	scanf("%d", &n);
	sumLow = 0;
	for (i = 0; i < n; ++i) {
		scanf("%f", &grade);
		grade = 1/(grade + 1);
		sumLow += grade;
	}
	printf("%.2f",(n/sumLow)-1);
	return 0;
}