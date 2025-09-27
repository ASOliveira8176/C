#include <stdio.h>//Página 35
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int dia;
    printf(" Digite um número correspondente a um dia da semana:");
    scanf("%i", &dia);
    switch (dia){
        case 1: printf(" O número %i corresponde a Domingo!", dia);break;
        case 2: printf(" O número %i corresponde a Segunda-Feira!", dia);break;
        case 3: printf(" O número %i corresponde a Terça-Feira!", dia);break;
        case 4: printf(" O número %i corresponde a Quarta-Feira!", dia);break;
        case 5: printf(" O número %i corresponde a Quinta-Feira!", dia);break;
        case 6: printf(" O número %i corresponde a Sexta-Feira!", dia);break;
        case 7: printf(" O número %i corresponde a Sábado!", dia); break;
        default: printf(" O número %i não corresponde a nenhum dia da semana! \n Reinicie o programa e tente novamente!", dia);break;
    }
    return 0;
}
