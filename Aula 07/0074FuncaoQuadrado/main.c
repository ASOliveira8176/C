#include <stdio.h>
#include <stdlib.h>
#include "locale.h"

float Square (float a);
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float num;
    printf("Digite um número: ");
    scanf("%f", &num);
    num=Square(num);
    printf ("O quadrado do número digitado é: %d", num);
    return 0;
    float Square (float a){
        return (a*a);
    }
}
