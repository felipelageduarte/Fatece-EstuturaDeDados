#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[]){

	int n,i;
	double sum=0,mean,var=0,dp;
	scanf("%d",&n);
	double num[n];
	for (i=0; i<n; ++i) {
		scanf("%lf",&num[i]);
		sum += num[i];
	}
	mean = sum/(double)n;
	for (i=0; i<n; ++i) {
		var += pow(num[i] - mean,2);
	}

	var/=n;
	dp = sqrt(var);

	printf("%.4lf\n",(double) mean);
	printf("%.4lf\n",(double) dp);
	
	return 0;
}