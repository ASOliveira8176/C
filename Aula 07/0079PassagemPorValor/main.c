#include <stdio.h>
#include <stdlib.h>
#include "valor.h"
#include "locale.h"

void main()
{
    setlocale(LC_ALL, "Portuguese");
    float num, sq;
    printf(" Digite um número: ");
    scanf("%f", &num);
    sq=sqrt(num);
    printf(" O número digitado foi: %.2f", num);
    printf(" O quadrado do número é: %.2f", sq);
    return 0;
}
