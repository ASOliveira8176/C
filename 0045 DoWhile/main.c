#include <stdio.h>//Página 40
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int fruta;
    do {
        printf(" Escolha a fruta pelo número: \n");
        printf("\t(1) ...Mamão \n\t(2) ...Abacaxi \n\t(3) ...Laranja\n");
        scanf("%i", &fruta);
    }while((fruta<1) || (fruta>3));
    switch (fruta){
        case 1: printf(" A fruta escolhida foi o Mamão! \n"); break;
        case 2: printf(" A fruta escolhida foi o Abacaxi! \n"); break;
        case 3: printf(" A fruta escolhida foi a Laranja! \n"); break;
    }
    return 0;
}
