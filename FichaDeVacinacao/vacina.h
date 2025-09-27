typedef struct{//Criaçao do Struct
    char nome[30], vacina[30], sexo;
    int CPF, idade;
}TVacina;

void Ler (int v, TVacina *P[]);
void Imprimir (int v, TVacina P[]);