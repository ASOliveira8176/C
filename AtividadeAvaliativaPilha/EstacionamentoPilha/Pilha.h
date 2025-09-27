#ifndef header_Pilha
#define header_Pilha
#include <stdlib.h>
#include <stdio.h>

typedef struct {//Criar produto
    int ano;
    char placa[8], modelo[15], marca[15];
}TCarro;

typedef struct celula{//Criar Célula
    TCarro item;
    struct celula *prox;
}TCelula;

typedef struct {//Criar parâmetros iniciais para a pilha
    TCelula *topo;
    TCelula *base;
    int tamanho;
}TPilha;

void Ler (TCarro *escrever);//Ler Carro
void Imprimir (TCarro *imprimir);//Imprime um item da pilha
void FPVazia (TPilha *Pilha);//Faz uma pilha Vazia
void Empilhar (TCarro x, TPilha *Pilha);//Estaciona um novo carro
void Desempilhar (TPilha *Pilha, TCarro *Item);//Desempilha um item

TCelula *Pesquisar (TPilha Pilha, TCarro Item);//Pesquisa um item na pilha
//void Excluir (TPilha *Pilha, TCarro *Item);//Exclui a pilha
void ImprimirPilha (TPilha Pilha);//Imprime a pilha

int Vazia (TPilha Pilha);//Verifica se a pilha esta vazia
int Tamanho (TPilha Pilha);//Retorna o tamanho da pilha
void Estacionar (TCarro *estaciona, TPilha *Pilha, int *n);//Testa as funções da pilha
void Liberar(TPilha *Pilha);//Libera a pilha

#endif // Header_Lista
