#include <stdio.h>//Página 54
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, valor, *p;
    n=55;
    p=&n;
    valor=*p;
    printf(" %d", valor);
    printf("\n O endereço do ponteiro é: %p", p);
    printf("\n O valor da variável apontada é: %d", *p);
    return 0;
}
