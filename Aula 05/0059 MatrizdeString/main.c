#include <stdio.h>//Página 50
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char string[5][100];
    int c;
    for (c=0;c<5;c++){
        printf (" Digite uma palavra: ");
        fflush(stdin);
        gets(string[c]);
    }
    printf(" As palavras que você digitou foram: ");
    for (c=0;c<5;c++){
        printf("\n %s", string[c]);
    }
    return 0;
}
