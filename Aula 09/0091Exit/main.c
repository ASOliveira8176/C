#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen ("exemplo.bin", "wb");//Abrir arquivo exemplo.bin (binário)
    if (!fp)
        printf("Erro ao abrir arquivo.");
    else
        printf("Arquivo aberto com sucesso.");
        exit (1);
    return 0;
}
