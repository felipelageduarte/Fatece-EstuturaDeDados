#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
    int n, i, j, k;

    scanf("%d",&n);
    scanf("%d",&i);
    scanf("%d",&j);

    for(k=0;n!=0;k++)
        if(k%i == 0 || k%j == 0){
            printf("%d\n",k);
            n--;
        }

    return 0;
}
