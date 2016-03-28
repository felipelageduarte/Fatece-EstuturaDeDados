#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[]){
        int i, n;
        float total = 0.0;

        scanf("%d",&n);

        for(i = 0; i < n; i++){
                total += pow(-1,i)*(((float)1)/((float)i+1));
        }

        printf("%.4f",total);
        return 0;
}
