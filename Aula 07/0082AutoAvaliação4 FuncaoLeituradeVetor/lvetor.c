#include <stdlib.h>
#include "lvetor.h"

void levetor(int *vetor, int dimensao){
        for (int c=0;c<dimensao;c++){
        vetor[c]=c;
    }
}

void imprime(int *vetor, int dimensao){
        for (int c=0;c<dimensao;c++){
            printf(" %d", vetor[c]);
    }
}
