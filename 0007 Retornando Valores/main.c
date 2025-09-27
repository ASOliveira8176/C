#include <stdio.h>//Página 8
#include <locale.h>
int Produto(int a, int b){
    return(a*b);
}
int main (){
    setlocale(LC_ALL, "Portuguese");
    int Resultado;
    Resultado=Produto(12,7);
    printf("O produto de 12 x 7 é: %d", Resultado);
    return 0;
}
