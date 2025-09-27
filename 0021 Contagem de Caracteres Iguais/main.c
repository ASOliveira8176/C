#include <stdio.h>// Página 15
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char String[100];
    int a, Contador=0;
    printf("Digite uma frase: ");
    gets(String);
    printf("A frase digitada foi: \n %s", String);
    for (a=0;String[a]!='\0';a++){
        if (String[a]=='c' || String[a]=='C'){
            Contador++;
        }
    }
    printf("O número de c's que aparecem na frase é: %i", Contador);
    return 0;
}
