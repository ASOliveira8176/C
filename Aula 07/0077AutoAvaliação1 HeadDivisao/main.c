#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#include "locale.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b;
    printf(" Digite um valor para a: ");
    scanf("%d", &a);
    printf(" Digite um valor para b: ");
    scanf("%d", &b);
    EDivisivel(a,b);
    return 0;
}
