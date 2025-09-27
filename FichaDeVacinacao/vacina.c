#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vacina.h"

void Ler (int v, TVacina *P[]){
    for (int c=0; c<v; c++){
        P[c] = malloc(sizeof(TVacina));
        printf("\n Digite o nome do %dº paciente: ", c+1);
        getchar();
        fgets (P[c]->nome,30, stdin);
        P[c]->nome[strcspn(P[c]->nome, "\n")] = '\0';
        printf(" Digite agora a idade: ");
        scanf("%d", &P[c]->idade);
        printf(" Digite o CPF: ");
        scanf("%d", &P[c]->CPF);
        printf(" Digite se o sexo e masculino ou feminino: ");
        getchar();
        scanf("%c", &P[c]->sexo);
        printf(" Por fim digite qual a vacina: ");
        getchar();
        fgets(P[c]->vacina, 30, stdin);
        P[c]->vacina[strcspn(P[c]->vacina, "\n")] = '\0';
    }
}

void ImprimirCadastro (TVacina P){
    printf("Nome: %s\n", P.nome);
    printf("Idade: %d\n", P.idade);
    printf("CPF: %d\n", P.CPF);
    printf("Sexo: %c\n", P.sexo);
    printf("Vacina: %s\n", P.vacina);
    printf("-------------------------\n");
}

void Imprimir (int v, TVacina P[]){
    printf("\n----- Fichas dos pacientes -----\n");
    for (int c = 0; c < v; c++) {
        ImprimirCadastro(P[c]);
    }
}