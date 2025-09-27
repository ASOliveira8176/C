#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    char Nome[30];
    int cpf;
    int idade;
    char sexo[1];
    char tipo[30];
}Vacina;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
    //Vacina paciente[n];
    printf("Digite quantos pacientes serao cadastrados: ");
    scanf("%d", &n);
    printf("%d \n", n);
    for (int i=1; i<=n;i++){
        printf("Digite o nome do %dº paciente: ", i);
        printf("Digite o cpf do  %dº paciente: ", i);
        printf("Digite a idade do %dº paciente: ", i);
        printf("Digite o sexo do %dº paciente: ", i);
        printf("Digite o tipo da vacina a ser tomada pelo paciente: ");
    }
    return 0;
}
