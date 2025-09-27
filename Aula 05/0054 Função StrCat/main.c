#include <stdio.h>//Página 47
#include <string.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL, "Portuguese");
    char palavra1[100], palavra2[100];
    printf(" Digite uma palavra: ");
    fflush(stdin);
    gets(palavra1);
    strcpy(palavra2, " Você digitou na string 1 a palavra: ");
    strcat(palavra2, palavra1);
    printf("\n%s", palavra2);
    return 0;
}
