#include <stdio.h>//Página 13
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char Digitado;
    printf (" Digite um caractere para saber seu código em ASCII: ");
    Digitado=getch();
    printf ("\n O código ASCII do caractere digitado é: %d", Digitado);
    return 0;
}
