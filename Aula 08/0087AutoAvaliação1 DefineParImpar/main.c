#include <stdio.h>
#include <stdlib.h>
#include "locale.h"
#define Paridade(A) ((A%2) ? (1):(0))

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, x;
    printf("Digite um número: ");
    scanf("%d", &num);
    x=Paridade(num);
    printf("%d", x);
    return 0;
}
