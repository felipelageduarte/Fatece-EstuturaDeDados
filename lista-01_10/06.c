#include <stdio.h>
#include <math.h>
  
int main(){
	int i,n; 
	float x1,y1,x2,y2,sumDist;
	scanf("%d", &n);
	sumDist = 0;
	for (i = 0; i < n; ++i) {
		if (i % 2 == 0) {
			scanf("%f %f", &x1, &y1);
		} else {
			scanf("%f %f", &x2, &y2);
		}
		if (i > 0) {
			sumDist += sqrt( pow(y2-y1,2) + pow(x2-x1,2) );
		}
	}
	printf("%.4f",sumDist);
	return 0;
}