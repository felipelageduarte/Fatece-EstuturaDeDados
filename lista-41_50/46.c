#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int n, i;
  scanf("%d",&n);
  for(i=0;i<n;++i){
    float a = pow(11,i);
    printf("%.0f\n",a);
  }
  return 0;
}