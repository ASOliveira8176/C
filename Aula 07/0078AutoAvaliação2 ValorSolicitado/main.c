#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int num;

int main()
{
    int first=0, sec=50;
    num=10;
    num+=func(first, sec); //10, 0 e 50 antes da atribuição e depois da atribuição será 10, 0 e 50
    printf("\n Confira! num=%d\t first = %d\t e sec= %d.", num, first, sec);
    return 0;
}
