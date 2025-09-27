#include <stdio.h>//Página 30
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf(" Digite um número:");
    scanf("%i", &x);
    if (x==10){
        printf(" Você acertou! \n O número é 10!!!");
    }else{
        printf(" Você errou! \n O número é diferente de 10!");
    }
    return 0;
}
