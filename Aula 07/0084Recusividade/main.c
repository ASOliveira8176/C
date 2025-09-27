#include <stdio.h>
#include <stdlib.h>
#include "locale.h"
#include "fatorial.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Digite um valor para n:");
    scanf("%d",&n);
    printf("O fatorial de %d! é: %d",n, Fatorial(n));
    return 0;
}
