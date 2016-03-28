#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[]){
        int i, n;
        float total = 0.0;

        scanf("%d",&n);

        for(i = 0; i < n; i++){
                total += (((float)(2*i+1))/((float)n-i));
        }

        printf("%.4f",total);
        return 0;
}
