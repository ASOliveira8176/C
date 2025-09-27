#include <stdio.h>//Página54
int main(){
    int num, *p;
    num=55;
    p=&num;
    printf(" Valor inicial: %d", num);
    *p=100;
    printf("\n Valor final: %d", num);
    return 0;
}
