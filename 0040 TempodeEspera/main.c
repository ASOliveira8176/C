#include <stdio.h>//Página 38
#include <stdlib.h>
int main(){
    long beep;
    printf("\a");
    for (beep=0;beep<10000;beep++){
        printf("\a");
    }
    return 0;
}
