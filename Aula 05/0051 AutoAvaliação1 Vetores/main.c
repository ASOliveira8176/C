#include <stdio.h>//Página 44
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int num[100], cont, total;
    do{
        if (cont>99){
            break;
        }
        printf("\n Digite um número inteiro, ou caso queira fechar digite -999: ");
        scanf("%d", &num[cont]);
        cont++;
    }while (num[cont-1]!=-999);
    total=cont--;
    printf("\n Os números que você digitou foram: ");
    for (cont=0;cont<total;cont++){
        printf(" %d", num[cont]);
    }
    return 0;
}
