#include <stdio.h>
#include <stdlib.h>
#include "locale.h"

void Mensagem (void);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Mensagem();
    printf(" Digite novamente");
    Mensagem();
    return 0;
}

void Mensagem(void){
    printf("\n Hello, I'm Alive!!!\n");
}
