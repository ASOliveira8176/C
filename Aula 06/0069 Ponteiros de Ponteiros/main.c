#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fpi=3.1415, *pf, **ppf;
    pf= &fpi; //pf armazena o endereço de fpi;
    ppf= &pf; //ppf armazena o endereço de pf;
    printf(" %f", **ppf); //Imprime o valor de fpi;
    printf("\n %f", *pf); //Também imprime o valor de fpi;
    return 0;
}
