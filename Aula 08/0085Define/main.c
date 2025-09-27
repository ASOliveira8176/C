#include <stdio.h>
#include <stdlib.h>
#include "locale.h"
#define Pi 3.141592
#define Version "7.0"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("O valor de pi é %f ", Pi);
    printf("\nVersão do programa: %s \n", Version);
    return 0;
}
