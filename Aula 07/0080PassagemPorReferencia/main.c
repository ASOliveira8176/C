#include <stdio.h>
#include <stdlib.h>
#include "troca.h"

void main(void)
{
    int num1, num2;
    num1=100;
    num2=200;
    Swap(&num1, &num2);
    printf(" Eles agora valem: %d e %d!", num1, num2);
    return 0;
}
