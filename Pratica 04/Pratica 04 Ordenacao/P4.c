#include <stdio.h>
#include <stdlib.h>
#include "P4.h"

/**--------------------------------------------------------------------------------->>> OPERAÇÕES DE TESTE <<<-------------------------------------------------------------------------------**/
void Teste (TLista *Lista, TPaciente *teste){/**Testa o funcionamento das funções do programa**/
    int b=0;
    printf("Digite quantas pessoas serão inseridas na lista de vacinação:");
    scanf("%d", &b);
    for (int c=0; c<b; c++){
        Ler(&teste);
        Inserir (Lista, *teste);
    }
    //Liberar(&Lista);
    Verificar(*Lista);
}

/**--------------------------------------------------------------------------------->>> OPERAÇÕES BÁSICAS <<<-------------------------------------------------------------------------------**/
void FLVazia(TLista *lista){/**Cria uma lista vazia**/
    lista->primeiro = 0;
    lista->ultimo = lista->primeiro;
}
int Verificar(TLista lista){/**Verificar se a lista está vazia**/
    return (lista.primeiro== lista.ultimo);
}
void Ler (TPaciente *escrever){/**Lê o item para inserir na lista**/
    printf("Digite o CPF a ser inserido: (direto, sem pontos e virgulas)");
    scanf("%d", &escrever->cpf);
    getchar();
    printf("Digite o nome a ser inserido:");
    fgets(escrever->nome, sizeof(escrever->nome), stdin);
    printf("Digite o endereco a ser inserido:");
    fgets(escrever->endereco, sizeof(escrever->endereco), stdin);
}
void Inserir (TLista *Lista, TPaciente x){/**Insere um item na lista**/
    int b=0;
    if (Lista->ultimo== MAXTAM){//Verificar se a lista está cheia
        printf("\n A lista já está cheia!");
        return -1;
    }
    else{//Inserir item quando tiver espaço
        for (int a=0; a< Lista->ultimo; a++){
            if (x.cpf==Lista->item->cpf){
                b++;
                break;
            }
        }
        if (b>0){
            printf("\n O CPF já existe na lista!");
        }
        else{
            Lista->item[Lista->ultimo]=x;
            Lista->ultimo++;
            printf("Inserido com Sucesso!");
        }
    }
}
/**void Liberar (TPaciente *libera){/**Libera a lista
    free (libera);
}**/
