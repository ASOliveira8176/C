#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int mat [3][3];//em int,float, double e int também para hexadecimal
    int a, b, c=1;
    for (int a=0;a<3;a++){
        for (int b=0; b<3;b++){
            printf("Digite o %dº número: ", c++);
            scanf("%D", &mat[a][b]);//O número será digitado como inteiro e impressso como Hexadecimal
        }
    }
    for (int a=0;a<3;a++){
        printf("\n");
        for (int b=0; b<3;b++){
            printf("%X ", mat[a][b]);//%d para int, %3,3f para float, %lf para double %X para hexadecimal
        }
    }
    return 0;
}
