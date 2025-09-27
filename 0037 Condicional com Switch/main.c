#include <stdio.h>//Página 35
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int a;
    printf(" Digite um número:");
    scanf("%i", &a);
    switch (a){
        case 9: printf(" O número é igual a 9!");break;
        case 10: printf(" O número é igual a 10!");break;
        case 11: printf(" O número é igual a 11!");break;
        default: printf(" O número não é 9, nem 10 e nem 11!");
    }
    return 0;
}
