#include <stdio.h>// Página 37
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char letra;
    int x;
    printf("Digite uma letra, sendo X para fechar o programa!\n");
    for (x=0;;x++){
        scanf("%c", &letra);
        if (letra=='x' || letra=='X'){
            printf(" Letra: %c\n", letra);
            break;
        }
        printf(" Letra: %c\n", letra);
        scanf("%c", &letra);
    }
    return 0;
}
