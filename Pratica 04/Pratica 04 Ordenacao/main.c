#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "P4.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    TLista Lista;
    TPaciente a;
    FLVazia(&Lista);
    Verificar(Lista);

    Teste(&Lista, &a);/**TESTA AS FUNÇÕES DA LISTA**/
    return 0;
}
