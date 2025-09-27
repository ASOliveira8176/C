#include <stdio.h>
#include <stdlib.h>
#include "locale.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    FILE *p;
    char c, str[30], frase[100]="Este é o arquivo:";
    int i;
    printf("Digite um nome para o arquivo: ");
    gets(str);

    if (!(p=fopen(str, "w"))){//Fecha em caso de erro com a escrita (write)
        printf("\n Não foi possível abrir o arquivo!");
        exit (1);
    }
    strcat (frase, str);

    for (i=0;frase[i]; i++){//Percorre a string frase escrevendo cada caractere
        putc(frase[i], p);
    }
    fclose(p);

    p=fopen(str, "r");//Recebe o nome do arquivo
    c=getc(p);//Lê o primeiro caractere
    while (!feof(p)){//enquanto não chegar ao final do arquivo
        printf("%c", c);
        c=getc(p);
    }
    fclose(p);
    return 0;
}
