#include <stdio.h>
#include <stdlib.h>
#include "zerar.h"
#include "locale.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int A, B;
    printf(" Digite um valor para a variável A:");
    scanf("%d", &A);
    printf(" Digite um valor para a variável B:");
    scanf("%d", &B);
    zerar(&A);
    zerar(&B);
    printf(" Agora o valor de A e B são: %d e %d respectivamente!", A, B);
    return 0;
}
