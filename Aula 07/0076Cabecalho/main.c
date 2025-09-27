#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"
#include "locale.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    printf("Digite um número: ");
    scanf("%d", numero);
    if (EPar(numero))
        printf(" O número é par!");
    else
        printf(" O número é ímpar!");
}
