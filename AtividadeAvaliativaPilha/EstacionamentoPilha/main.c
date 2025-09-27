#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "Pilha.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");//VARIÁVEIS
    TPilha *P1;
    TCarro *x;
    FPVazia (&P1);

    printf("Vazia? %d \n", Vazia (*P1));//PARÂMETROS INICIAIS PARA TESTE DE CONTROLE
    //printf("Tamanho: %d ", Tamanho (*P1));
    for (int n=0; n<3;n++){
        printf("%d\n", n);
        Estacionar(&x, &P1, &n);//TESTA AS FUNÇÕES DA PILHA
    }
    ImprimirPilha(*P1);

//  VerificaLista(L1, L2);//Verifica igualdade das listas
//  ConcatLista(&L1, &L2);//Concatena Listas
//  ImprimirN (&L1){//Imprimi o N termo da Lista
//  RemoverN (&L1){//Remove o N termo da Lista
//  ImpressaoLista (L1, &b);//Imprime a lista recursivamente
//  LiberarPilha(&P1);//FINALIZAÇÃO DO PROGRAMA!!!
//  LiberarPilha(&L2);
 //   printf("\n \n Vazia? %d \n", Vazia (*P1));
 //   printf("\n Vazia? %d \n", Vazia (L2));

    return 0;
}
