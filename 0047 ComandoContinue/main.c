#include <stdio.h>//Página 41
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    while (opcao!=5){
        printf(" \n escolha um número entre 1 e 5: ");
        scanf("%i", &opcao);
        if ((opcao>5) || (opcao<1)){
            continue;
        }
        switch (opcao){
            case 1: printf(" --> Primeira Opção.. \n");break;
            case 2: printf(" --> Segunda Opção.. \n"); break;
            case 3: printf(" --> Terceira Opção.. \n"); break;
            case 4: printf(" --> Quarta Opção.. \n"); break;
            case 5: printf(" --> Fechando.. \n"); break;
        }
    }
    return 0;
}
