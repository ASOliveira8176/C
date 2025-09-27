#include <stdio.h>//Página 43
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int ano, mes, dia, equivale=0;
    printf("Digite a data!\n");
    while ((ano<1900) || (ano>2100)){
        printf(" Digite um ano válido: ");
        scanf("%i", &ano);
    }
    Meses: printf("\n Agora digite um mês válido: ");
    scanf("%i", &mes);
    if ((mes<1) || (mes>12)){
        goto Meses;
    }
    Dias: printf("\n Digite um dia válido: ");
    scanf("%i", &dia);
    if ((mes==1) || (mes==3) || (mes==5) || (mes==7) || (mes==8) || (mes==10) || (mes==12)){
        if ((dia<1) || (dia>31)){
            Errado: printf("\n Dia inválido para este mês! ");
            goto Dias;
        }else{
            if ((mes==2) && (ano%4)){
                equivale++;
                if (dia>29){
                    goto Errado;
                }
            }else{
                if ((mes==2) && (dia>28)){
                    goto Errado;
                }if (dia>30){
                    goto Errado;
                }
            }
        }
    }
    switch (mes){
        case 2: equivale=equivale+3;break;
        case 4: equivale=equivale+6;break;
        case 5: equivale=equivale+8;break;
        case 6: equivale=equivale+11;break;
        case 7: equivale=equivale+13;break;
        case 8: equivale=equivale+16;break;
        case 9: equivale=equivale+19;break;
        case 10: equivale=equivale+21;break;
        case 11: equivale=equivale+24;break;
        case 12: equivale=equivale+26;break;
    }
    equivale=equivale+dia+(28*(mes-1));
    printf("\n A data %d/%d/%d corresponde ao %dº dia no ano!", dia, mes, ano, equivale);
    return 0;
}
