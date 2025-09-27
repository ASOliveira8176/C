#include <stdio.h>//Página 8
#include <locale.h>
float Produto (float a, float b){
    return (a*b);
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    float Resultado;
    Resultado=Produto(45.2,0.0067);
    printf("O Produto da multiplicação 45,2 x 0,0067 é: %f", Resultado);
    return 0;
}
