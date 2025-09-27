#include <stdio.h>//Página 34
int main(){
    int index=0, contador;
    char letras[5]="Joao";
    for (contador=0;contador<1000;contador++){
        printf(" %c", letras[index]);
        (index==3)? index=0: ++index;
    }
    return 0;
}
