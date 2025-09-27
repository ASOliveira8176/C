#include <stdio.h>//Página 46
#include <string.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char string1 [100], string2 [100], string3 [100];
    printf(" Digite uma string: ");
    fflush(stdin);
    gets(string1);
    strcpy(string2, string1);
    strcpy(string3, " Você digitou na string 1: ");
    printf("\n %s %s", string3, string2);
    return 0;
}
