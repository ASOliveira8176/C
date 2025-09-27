#include <stdio.h>
#include <stdlib.h>
#include "locale.h"
float por2(float a, float b){
    float c;
    if ((a/b)==(0)){
        return 0;
    }else{
        return 1;
    }
}

int main()
{
    setlocale (LC_ALL, "Portuguese");
    int a, b;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a,&b);
    por2(a,b);
    return 0;
}
