#include <stdio.h>
#include <string.h>
#include <locale.h>

char StrCat (char *destino, char *origem){
    while (*destino){
        *destino++;
    };
    while (*origem){
        *destino=*origem;
        *origem++;
        *destino++;
    }
}

int StrLen(char *string){
    int c;
    while (*string){
        c++;
        string++;
    }
    string=c;
}


int main(){
    setlocale(LC_ALL, "Portuguese");
    int tamanho;
    char stringa[100];
    char stringb[100]="A string que você digitou foi: ";
    printf (" Entre com uma string: ");
    fflush(stdin);
    gets(stringa);
    tamanho=StrLen(stringa);
    StrCat(&stringb, &stringa);
    printf (" %s", stringb);
    printf ("\n A string que você digitou tem o tamanho de %d caracteres", tamanho);
    return 0;
}
