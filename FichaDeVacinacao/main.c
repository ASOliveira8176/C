#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "locale.h"
#include "vacina.h"

/*Alexsandro dos Santos Oliveira
  Girlei Aparecido Costa Pinto*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vacinas;
    printf("Digite quantas vacinas ha disponiveis hoje:");
    scanf("%d", &vacinas);
    TVacina *Pacientes=(TVacina *) malloc (vacinas * sizeof(TVacina));
    if (Pacientes == NULL){
        printf ("Erro ao alocar memoria");
        return 1;
    }
    Ler (vacinas, &Pacientes);
    Imprimir (vacinas, Pacientes);
    free (Pacientes);
    return 0;
}