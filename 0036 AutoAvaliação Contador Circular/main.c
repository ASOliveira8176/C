#include <stdio.h>//Página 34
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int index=0, contador, a=-1;
    char letras[5]="Joao";
    for (contador=0;contador<100;contador++){
        (a==5)? a=0: a++;
        if (a%5 || a==0){
            printf(" %c", letras[index]);
        }else{
            (index==3)? index=0: ++index;
        }
    }
    if (contador%5){
        printf("\n O contador é divisível por 5!");
    }
    return 0;
}
