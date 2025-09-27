#include <stdio.h>//Página 39
#include <stdlib.h>
int main(){
    long beep;
    printf("\a");
    while (beep<1000){
        if (beep%200){
                printf("\a %i", beep);
        }
        beep++;
    }
    return 0;
}
