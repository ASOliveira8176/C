#include <stdio.h>//Página56
int main(){
    int y, x, *p;
    y=0;//y recebe 0.
    p=&y;//p recebe o endereço de y.
    x=*p;//x recebe o valor que está armazenado em p.
    x=4;//x recebe 4.
    (*p)++;//p recebe 1, ou seja, adiciona 1 a y, ficando y=1.
    x--;//1 é removido de x, ou seja, x=3.
    (*p)+=x;//A variável para qual p aponta(y) recebe ela mesma mais o valor em x, ou seja, y=1+3, logo, y=4.
    printf("y = %d\n", y);
    return 0;
}
