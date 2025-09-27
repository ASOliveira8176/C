#include <stdio.h>//Página 9
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char Letra;
    Letra='D';
    printf("A variável char recebeu a letra: %c", Letra);
    return 0;
}
