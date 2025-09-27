#ifndef LINEAR_H
#define LINEAR_H
#define MAXTAM 8001

typedef struct{/**Criar Item**/
  int num;
}TItem;
typedef struct {/**Criar parâmetros iniciais para a lista**/
  TItem item[MAXTAM];
  int primeiro;
  int ultimo;
}TLista;

void Teste (TLista *Lista, TProduto teste);/**Testa o funcionamento das funções do programa**/

void FLVazia(TLista *lista);/**Criar uma lista vazia**/
void Verificar(TLista lista);/**Verificar se a lista está vazia**/
void Ler (TItem *escrever);/**Lê o item para inserir na lista**/
void Liberar (TItem *libera);/**Libera a lista**/

void Inserir (TLista *Lista, TItem x);/**Insere um item na lista**/

#endif //LINEAR_H

