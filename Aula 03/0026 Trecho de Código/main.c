#include <stdio.h>//Página 23
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int a=17, b=13, x, y;
    float z=17, z1, z2;
    x=a/b;
    y=a*b;
    z1=z/b;
    z2=a/b;
    printf(" O resultado da divisão é: %i! \n O resultado da multiplicação é %i! \n E o resultado das ultimas divisões é: %f, %f",x, y, z1, z2);
    printf("\n Sinal sonoro! \a");
    return 0;
}
