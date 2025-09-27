#include <stdio.h>//Página 49
int main(){
    int matriz[20][10], a, b, cont=0;
    for (a=0;a<20;a++){
        for (b=0;b<10;b++){
            matriz[a][b]=cont;
            cont++;
            printf(" %i", cont);
        }
    }printf("\n");
    return 0;
}
