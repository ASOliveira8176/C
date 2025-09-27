#include <stdio.h>
#include <stdlib.h>
#include "func.h"
int num=15;

int func (int a, int b){
    a=(a+b)/2; //O valor será a metade da soma de a + b
    num-=a;
    return a;
}
