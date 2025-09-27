#include <stdio.h>//Página 9
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char Letra;
    Letra='E';
    printf("A letra E na tabela ASCII corresponde ao número: %d", Letra);
    return 0;
}
