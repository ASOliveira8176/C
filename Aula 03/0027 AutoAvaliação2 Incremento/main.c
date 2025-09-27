#include <stdio.h>//Página 24
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int x, y, z;
    x=y=10;
    z=++x;
    x=-x;
    y++;
    x=x+y-(--z);
    printf(" Valor de x, y e z são respectivamente: %i, %i e %i! \a", x, y, z);
    return 0;
}
