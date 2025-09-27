#include <stdio.h>//Página 46
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char string[100];
    printf(" Digite o seu nome: ");
    fflush(stdin);
    gets(string);
    printf(" Olá %s, tenha um bom dia!", string);
    return 0;
}
