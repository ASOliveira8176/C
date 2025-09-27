#include <stdio.h>//Página 14
#include <locale.h>
int main (){
    setlocale(LC_ALL, "Portuguese");
    int Numero;
    printf(" Digite um número inteiro: ");
    scanf("%i", &Numero);
    if (Numero>10){
        printf(" O número é maior do que 10!");
    }if (Numero==10){
        printf(" Você acertou!\n O número é igual a 10!");
    }if (Numero<10){
        printf(" O número é menor do que 10!");
    }
    return 0;
}
