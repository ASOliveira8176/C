#include <stdio.h>
#include "troca.h"

void Swap (int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
