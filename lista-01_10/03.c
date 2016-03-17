#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[]){
        double a,frac;

        scanf("%lf",&a);

        printf("%.0f\n",floor(a));
        printf("%.4f\n",(a-(int)a));
        printf("%.0f\n",round(a));

        return 0;
}
