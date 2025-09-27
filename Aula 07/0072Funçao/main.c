#include <stdio.h>
#include <stdlib.h>
#include "locale.h"

int Square(int s){
    return (s*s);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a;
    printf("Digite um número para saber o seu valor ao quadrado: ");
    scanf("%d", &a);
    a=Square (a);
    printf("O quadrado do número digitado é: %d", a);
    return 0;
}
