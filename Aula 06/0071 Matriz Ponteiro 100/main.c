#include <stdio.h>
#include <stdlib.h>

int zero (int *one){
    *one=0;
}

int pont (int *n, int a, int b){
    *n=(a*100)+b+1;
}

int main()
{
    int *matriz[100][100], a, b;
    for (a=0;a<100;a++){
        for (b=0;b<100;b++){
            zero(&matriz[a][b]);
        }
    }
    for (a=0;a<100;a++){
        for (b=0;b<100;b++){
            pont(&matriz[a][b], a, b);
        }
    }
    for (a=0;a<100;a++){
        for (b=0;b<100;b++){
            printf("%3d ", matriz[a][b]);
        }printf("\n ");
    }
    return 0;
}
