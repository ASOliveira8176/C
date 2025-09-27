#include <stdio.h>
#include <locale.h>
int Multiplicacao(float a,float b,float c){
    printf("\n O resultado da muliplicação é: %f", a*b*c);
    return 0;
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    float x, y;
    printf("Digite os dois números que serão multiplicados à 3,87:");
    scanf("%f%f", &x, &y);
    Multiplicacao(x, y, 3.87);
}
