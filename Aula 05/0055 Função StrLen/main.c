#include <stdio.h>//Página 48
#include <string.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int tamanho;
    char string[100];
    printf (" Entre com uma string: ");
    fflush(stdin);
    gets(string);
    tamanho=strlen(string);
    printf (" A string que você digitou tem o tamanho de %d caracteres", tamanho);
    return 0;
}
