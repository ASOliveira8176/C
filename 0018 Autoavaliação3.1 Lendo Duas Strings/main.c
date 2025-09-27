#include <stdio.h>//Página 13
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char PalavraA[20], PalavraB[20];
    printf(" Digite duas palavras: ");
    scanf("%s", PalavraA);
    scanf("%s", PalavraB);
    printf ("\n As duas palavras digitas foram: %s e %s", PalavraA, PalavraB);
    printf ("\n As segundas letras destas palavras são respectivamente: %c e %c", PalavraA[1], PalavraB[1]);
    return 0;
}
