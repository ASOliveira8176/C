#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

/**--------------------------------------------------------------------------------->>> OPERAÇÕES DE TESTE <<<-------------------------------------------------------------------------------**/
void Teste (TLista *Lista, TItem x){/**Testa o funcionamento das funções do programa**/
    int b=0;
    printf("Digite quantos itens serão inseridos na lista");
    scanf("%d", b);
    for (int c=0; c<b; c++){
        Ler(&Lista);
        Inserir (&Lista, x);
    }
    //Liberar(&Lista);
    Verificar(Lista);
}

/**--------------------------------------------------------------------------------->>> OPERAÇÕES BÁSICAS <<<-------------------------------------------------------------------------------**/
void FLVazia(TLista *lista){/**Cria uma lista vazia**/
    lista->primeiro = 0;
    lista->ultimo = lista->primeiro;
}
void Verificar(TLista lista){/**Verificar se a lista está vazia**/
    return (lista.primeiro== lista.ultimo);
}
void Ler (TItem *escrever){/**Lê o item para inserir na lista**/
    printf("Digite o número a ser inserido:");
    scanf("%d", &escrever->num);
}
void Inserir (TLista *Lista, TItem x){/**Insere um item na lista**/
    int b;
    if (Lista->ultimo== MAXTAM){//Verificar se a lista está cheia
        printf("\n A lista já está cheia!");
        return -1;
    }
    else{//Inserir item quando tiver espaço
        for (int a=0; a< Lista->ultimo; a++){
            if (x.num==Lista->item->num){
                b++;
            }
        }
        if (b>0){
            printf("\n O número já existe na lista!");
        }
        else{
            Lista->item[Lista->ultimo]=x;
            Lista->ultimo++;
        }
    }
}
void Liberar (TItem *libera){/**Libera a lista**/
    free (libera);
}
