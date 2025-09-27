#include <stdlib.h>
#include "fatorial.h"

int Fatorial(int n){
    if (n)
        return n*Fatorial(n-1);
    else
        return 1;
}
