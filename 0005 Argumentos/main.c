#include <stdio.h>
#include <locale.h>
int square (int x){
    printf("\n O quadrado do número digitado é: %d", (x*x));
    return 0;
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int a;
    printf("Digite um número para saber o seu quadrado:");
    scanf("%d", &a);
    square(a);
    return 0;
}
