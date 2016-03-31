#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    char str[1000];
    scanf("%s",str);

    int i;
    for(i = 0; str[i] != '\0'; ++i){
        str[i] += 32;
    }

    printf("%s\n",str);

    return 0;
}
