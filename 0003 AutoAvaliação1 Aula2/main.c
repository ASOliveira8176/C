#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf("Digite um valor inteiro para x:");
    scanf("%i", &x);
    printf("O valor de x é: %i\n", x);
    return 0;
}
