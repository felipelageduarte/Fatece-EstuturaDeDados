#include<stdlib.h>
#include<stdio.h>
#include<math.h>

double lucas(int i){
    if(i == 0) return 2;
    if(i == 1) return 1;
    return lucas(i -2) + lucas(i -1);
}

int main(int argc, char *argv[]){

    int size;
    scanf("%d", &size);
    printf("%lf\n",lucas(size));

    return 0;
}
