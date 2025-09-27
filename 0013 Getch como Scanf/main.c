#include <stdio.h>//Página 10
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char Letra;
    scanf("%c", &Letra);
    printf("Você pressionou a letra: %c", Letra);
    return 0;
}
