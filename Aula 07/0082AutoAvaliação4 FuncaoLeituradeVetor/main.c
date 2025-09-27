#include <stdio.h>
#include <stdlib.h>
#include "locale.h"
#include "lvetor.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a;
    printf("Digite qual o tamanho do vetor: ");
    scanf("%d", &a);
    int b[a];
    levetor(&b, a);
    imprime(&b, a);
    return 0;
}
