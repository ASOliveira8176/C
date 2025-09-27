#include <stdio.h>//Página 58
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int matrx [10]={1,2,3,4,5,6,7,8,9,10};
    int *p;
    p=matrx;
    printf(" O terceiro elemento do vetor é: %d", p[2]);
    return 0;
}
