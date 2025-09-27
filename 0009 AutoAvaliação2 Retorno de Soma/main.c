#include <stdio.h>
#include <locale.h>
int Soma(int x, int y){
    return (x+y);
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int Resultado;
    Resultado=Soma(15,85);
    printf("O resultado da soma 15+85 é: %i", Resultado);
    return 0;
}
