#include <stdio.h>//Página 48
#include <string.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char p1[100], p2[100], p3[100], p4[100];
    printf(" Digite a primeira palavra: ");
    fflush(stdin);
    gets(p1);
    printf(" Digite a segunda palavra: ");
    gets(p2);
    printf(" Digite a terceira palavra: ");
    gets(p3);
    printf(" Digite a quarta palavra: ");
    gets(p4);
    strcat(p4,p3);
    strcat(p2,p1);
    strcat(p4,p2);
    printf(" As palavras que você digitou foram: %s", p4);
    return 0;
}
