#include <stdio.h>//Página 13
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    printf(" Teste com o símbolo de %%!");
    printf("\n Teste com número float %.3f!", 40.345);
    printf("\n O caractere %c e o inteiro %i!", 'F', 120 );
    printf("\n %s de string!", "Exemplo");
    printf("\n Sequência de Códigos: %s%i%%%", "Juros de ", 10);
    return 0;
}
