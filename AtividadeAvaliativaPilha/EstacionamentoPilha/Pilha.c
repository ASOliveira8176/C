#include <stdio.h>//corpo das assinaturas em lista.h
#include <stdlib.h>
#include "Pilha.h"

void Ler (TCarro *escrever){//Ler Carro
    printf("\n Digite a marca do carro: ");
    fflush(stdin);
    gets(escrever-> marca);
    printf(" Digite o modelo do carro: ");
    gets(escrever->modelo);
    printf(" Digite a placa do carro: ");
    gets(escrever->placa);
    printf(" Digite o ano do carro: ");
    scanf("%d", &escrever-> ano);
}

void Imprimir (TCarro *imprimir){//Imprime um item da pilha
    printf("\n A marca do carro é: %s ", imprimir->marca);
    printf("\n O modelo do carro é: %s ", imprimir->modelo);
    printf("\n A placa do carro é: %s ", imprimir->placa);
    printf("\n O ano do carro é: %d ", imprimir->ano);

}

void FPVazia (TPilha *Pilha){//Faz uma Pilha Vazia
    Pilha-> topo= (TCelula *) malloc (sizeof(TCelula));
    Pilha-> base= Pilha-> topo;
    Pilha-> topo-> prox= NULL;
    Pilha-> tamanho=0;
}

void Empilhar (TCarro x, TPilha *Pilha){//Estaciona um novo carro
    TCelula *Aux;
    Aux=(TCelula *)malloc (sizeof(TCelula));
    Pilha->topo->item=x;
    Aux->prox=Pilha->topo;
    Pilha->topo=Aux;
    Pilha->tamanho++;
}

TCelula *Pesquisar (TPilha Pilha, TCarro Item){//Pesquisa um item na pilha
    TCelula *Aux;
    Aux= Pilha.topo;
    while (Aux->prox !=NULL){
        if (Aux-> prox-> item.placa==Item.placa){
            return Aux;
        }Aux= Aux-> prox;
        return NULL;
    }
}

void Desempilhar (TPilha *Pilha, TCarro *Item){//Desempilha um item
    TCelula *q;
    if (Vazia(*Pilha)){
        printf("Erro: lista vazia \n");
        return;
    }
    q=Pilha->topo;
    Pilha->topo=q->prox;
    *Item=q->prox->item;
    free(q);
    Pilha->tamanho--;
}

void ImprimirPilha (TPilha Pilha){//Imprime a pilha
    TCelula *Aux;
    Aux= Pilha.topo;
    while (Aux != NULL){
        printf ("\n A marca do veículo é: %s \n", Aux->item.marca);
    printf("ok");
        printf ("\n O modelo do veículo é: %s \n", Aux-> item.modelo);
        printf ("\n A placa do veículo é: %s \n", Aux-> item.placa);
        printf ("\n, O ano do veículo é: %d \n", Aux-> item.ano);
        Aux=Aux-> prox;
    }
}

int Vazia (TPilha Pilha){//Verifica se a pilha está vazia
    return (Pilha.topo==Pilha.base);
}

int Tamanho (TPilha pilha){//Retorna o tamanho da pilha
    return pilha.tamanho;
}

void Estacionar (TCarro *estaciona, TPilha *Pilha, int *n){//Testa as funções da pilha
    Empilhar (*estaciona, &Pilha);
    Ler (&estaciona);
    Imprimir(&estaciona);
    n++;
}

void Liberar (TPilha *Pilha){//Libera a pilha
    while (!Vazia(*Pilha)){
        Desempilhar (Pilha, &Pilha-> topo-> prox-> item);
    }
    free(Pilha->topo);
}
//corpo das funções que possuem assinatura em lista.h
