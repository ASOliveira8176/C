#include <stdio.h>
#include <stdlib.h>
#include "locale.h"
#include "Lista.h"

int main(){
    setlocale(LC_ALL, "Portuguese");
    TLista Lista;
    TItem a;
    FLVazia(&Lista);
    Verificar(Lista);

    Teste(&Lista, a);/**TESTA AS FUNÇÕES DA LISTA**/

    return 0;
}
