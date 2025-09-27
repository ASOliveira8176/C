#include <stdio.h>
#include <stdlib.h>
#include "locale.h"
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Porutugese");
    FILE *a;
    char str[50], b;
    int c=0;
    printf("Digite um nome para o arquivo: ");
    gets(str);
    if (!(a=fopen("arquivo.txt", "w"))){
        printf("Não foi possível abrir o arquivo!");
        exit(1);
    }
    fclose(a);//Fecha o arquivo
    while (str[c]!= '\0'){
        c++;
    }

    a=fopen("arquivo.txt", "r");//Abre o arquivo
    printf("O arquivo tem %d caracteres.", c);
    fclose(a);
    return 0;
}
