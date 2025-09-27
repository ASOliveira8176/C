#ifndef LINEAR_H
#define LINEAR_H
#define MAXTAM 8001

typedef struct{/**Criar Item**/
  char nome[30], endereco[50];
  int cpf;
}TPaciente;

typedef struct Lista{/**Criar parâmetros iniciais para a lista**/
  TPaciente item[MAXTAM];
  int primeiro;
  int ultimo;
}TLista;

void Teste (TLista *Lista, TPaciente *teste);/**Testa o funcionamento das funções do programa**/

void FLVazia(TLista *lista);/**Criar uma lista vazia**/
int Verificar(TLista lista);/**Verificar se a lista está vazia**/
void Ler (TPaciente *escrever);/**Lê o item para inserir na lista**/
//void Liberar (TPaciente *libera);/**Libera a lista**/

void Inserir (TLista *Lista, TPaciente x);/**Insere um item na lista**/

#endif //LINEAR_H
