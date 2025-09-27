#include <stdio.h>//Página 25
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int a;
    for (a=1;a<=100;a++){
        if (!(a%2)){
            printf(" %d", a);
        }
    }
    printf(" \n O operador de resto dará falso e o número que for ímpar não será impresso! ");
    return 0;
}
