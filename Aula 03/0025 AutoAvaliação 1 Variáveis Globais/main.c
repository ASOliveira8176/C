#include <stdio.h>//Página 20
#include <locale.h>
int global=10;
int main(){
    setlocale(LC_ALL, "Portuguese");
    int a=20, b=30, c=40, d=50, e=60, x;
    char animal[7]="coelha";
    printf(" O números armazenados são: %i, %i, %i, %i, %i e %i!", global, a, b, c, d, e);
    printf("\n E o animal armazenado é: %s!",animal);
    return 0;
}
