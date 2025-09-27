#include <stdio.h>//Página 11
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char Palavra[100];
    printf("Digite uma String (Palavra): ");
    gets (Palavra);
    printf("A palavra que você digitou foi: %s", Palavra);
    return 0;
}
